/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:37:35 by papereir          #+#    #+#             */
/*   Updated: 2024/01/02 19:36:23 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	struct_init(t_map *map)
{
	map->height = 0;
	map->width = 0;
	map->cigs = 0;
	map->player = 0;
	map->exit = 0;
	map->s_player.x = 0;
	map->s_player.y = 0;
	map->s_player.movements = 0;
}

t_map	*lencheck(t_map *map)
{
	int row_len;
	int i;
	
	i = 0;
	while (i < map->height)
	{
		row_len = ft_strlen(map->map[i]);
		if (row_len != map->height)
			error('R');
		i++;
	}
	return (map);
}

t_map	*closecheck(t_map *map)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (j < map->width)
	{
		if (map->map[0][j] != '1' || map->map[map->height - 1][j] != '1')
        {
            error('C');
        }
        j++;
	}
	while (i < map->height - 1)
	{
		if (map->map[i][0] != '1' || map->map[i][map->width - 1] != '1')
        {
            error('C');
        }
        i++;
    }

    return (map);
}

t_map	*insidecheck(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->height -1)
	{
		while (j < map-> width)
		{
			if (map->map[i][j] == 'P')
			{
				map->player++;
				map->s_player.y = i;
				map->s_player.x = j;
			}
			else if (map->map[i][j] == 'E')
				map->exit++;
			else if (map->map[i][j] == 'C')
				map->cigs++;
			j++;
		}
		j = 0;
		i++;
	}
	if (map->player != 1 || map->cigs < 1 || map->exit != 1)
		error('I');
	return (map);
}
