/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:27:25 by papereir          #+#    #+#             */
/*   Updated: 2024/01/14 12:33:01 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	checkitem(t_map *map, int y, int x)
{
	map->copy[y][x] = 'P';
	if (map->copy[y][x + 1] == '0' || map->copy[y][x + 1] == 'E'
		|| map->copy[y][x + 1] == 'C')
		checkitem (map, y, x + 1);
	if (map->copy[y][x - 1] == '0' || map->copy[y][x - 1] == 'E'
		|| map->copy[y][x - 1] == 'C')
		checkitem (map, y, x - 1);
	if (map->copy[y + 1] && (map->copy[y + 1][x] == '0'
		|| map->copy[y + 1][x] == 'E' || map->copy[y + 1][x] == 'C'))
		checkitem (map, y + 1, x);
	if (map->copy[y - 1][x] == '0' || map->copy[y - 1][x] == 'E'
		|| map->copy[y - 1][x] == 'C')
		checkitem (map, y - 1, x);
}


void	posfinder(int *x, int *y, t_map *map)
{
	*y = map->s_player.y;
	*x = map->s_player.x;
}

void	pathcheck(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < map->height - 1)
	{
		j = 0;
		while (j < map->width)
		{
			if (map->copy[i][j] == 'E' || map->copy[i][j] == 'C')
				error('P');
			j++;
		}
		i++;
	}	
}

void	ultimatecheck(t_map *map)
{
	int	x;
	int	y;  

	posfinder(&x, &y, map);
	checkitem(map, y, x);
	pathcheck(map);
}

void	extrachecker(t_map *map)
{
	static int	i;
	static int	j;

	if (map->player != 1 || map->exit != 1 || map->cigs < 1)
		exit(EXIT_FAILURE);
	while (i < map->height - 1)
	{
		while (j < map->width)
		{
			if (map->map[i][j] != '1' && map->map[i][j] != '0'
			&& map->map[i][j] != '\0' && map->map[i][j] != 'C'
			&& map->map[i][j] != 'E' && map->map[i][j] != 'P')
				error('I');
		j++;
		}
	j = 0;
	i++;
	}
	i = 0;
}