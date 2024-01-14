/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:37:35 by papereir          #+#    #+#             */
/*   Updated: 2024/01/14 13:22:57 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_map	struct_init(t_map *map)
{
	map->height = 0;
	map->width = 0;
	map->cigs = 0;
	map->player = 0;
	map->exit = 0;
	map->s_player.x = 0;
	map->s_player.y = 0;
	map->s_player.movements = 0;
	return(*map);
}

t_map	*lencheck(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->height - 1)
	{
		j = 0;
		while (map->map[i][j] != '\0')
			j++;
		if (j != map->width - 1)
			error('L');
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
	static int	i;
	static int	j;

	while (i < map->height - 1)
	{
		while (j < map->width)
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
	i = 0;
	return (map);
}

t_map	*cornercheck(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->height - 1)
	{
		j = 0;
		while (j < map->width - 1)
		{
			if (map->map[0][j] != '1')
				error('C');
			if (map->map[map->height - 2][j] != '1')
				error('C');
			if (map->map[i][0] != '1')
				error('C');
			if (map->map[i][map->width - 2] != '1')
				error('C');
			j++;
		}
		i++;
	}
	return (map);
}
