/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:53:52 by papereir          #+#    #+#             */
/*   Updated: 2024/01/14 12:59:49 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_detect(int keycode, t_map *map)
{
	char	*step;

	if (keycode == UP)
		pressup(map);
	else if (keycode == RIGHT)
		pressright(map);
	else if (keycode == LEFT)
		pressleft(map);
	else if (keycode == DOWN)
		pressdown(map);
	else if (keycode == ESC)
	{
		mlx_destroy_window(map->s_xpm.mlx, map->s_xpm.mlx_win);
		exit(EXIT_FAILURE);
	}
	step = ft_itoa(map->s_player.movements);
	free(step);
	return (0);
}

void	pressup(t_map *map)
{
	if (map->map[(map->s_player.y) - 1][map->s_player.x] == '0')
	{
		map->map[map->s_player.y][map->s_player.x] = '0';
		map->map[map->s_player.y - 1][map->s_player.x] = 'P';
		map->s_player.y = map->s_player.y -1;
		map->s_player.movements++;
	}
	else if (map->map[map->s_player.y - 1][map->s_player.x] == 'C')
	{
		map->map[map->s_player.y][map->s_player.x] = '0';
		map->map[map->s_player.y - 1][map->s_player.x] = 'P';
		map->s_player.y = map->s_player.y - 1;
		map->s_player.movements++;
		map->cigs--;
	}
	else if (map->map[map->s_player.y - 1][map->s_player.x] == 'E' &&
			map->cigs == 0)
	{
		map->map[map->s_player.y][map->s_player.x] = '0';
		map->map[map->s_player.y - 1][map->s_player.x] = 'P';
		map->s_player.y = map->s_player.y - 1;
		map->s_player.movements++;
		win('W');
	}
}

void	pressdown(t_map *map)
{
	if (map->map[map->s_player.y +1][map->s_player.x] == '0')
	{
		map->map[map->s_player.y][map->s_player.x] = '0';
		map->map[map->s_player.y + 1][map->s_player.x] = 'P';
		map->s_player.y = map->s_player.y + 1;
		map->s_player.movements++;
	}
	else if (map->map[map->s_player.y + 1][map->s_player.x] == 'C')
	{
		map->map[map->s_player.y][map->s_player.x] = '0';
		map->map[map->s_player.y + 1][map->s_player.x] = 'P';
		map->s_player.y = map->s_player.y +1;
		map->s_player.movements++;
		map->cigs--;
	}
	else if (map->map[map->s_player.y + 1][map->s_player.x] == 'E' &&
			map->cigs == 0)
	{
		map->map[map->s_player.y][map->s_player.x] = '0';
		map->map[map->s_player.y + 1][map->s_player.x] = 'P';
		map->s_player.y = map->s_player.y + 1;
		map->s_player.movements++;
		win('W');
	}
}

void	pressright(t_map *map)
{
	if (map->map[map->s_player.y][map->s_player.x + 1] == '0')
	{
	map->map[map->s_player.y][map->s_player.x] = '0';
	map->map[map->s_player.y][map->s_player.x + 1] = 'P';
	map->s_player.x = map->s_player.x + 1;
	map->s_player.movements++;
	}
	else if (map->map[map->s_player.y][map->s_player.x +1] == 'C')
	{
		map->map[map->s_player.y][map->s_player.x] = '0';
		map->map[map->s_player.y][map->s_player.x + 1] = 'P';
		map->s_player.x = map->s_player.x + 1;
		map->s_player.movements++;
		map->cigs--;
	}
	else if (map->map[map->s_player.y][map->s_player.x + 1] == 'E' &&
			map->cigs == 0)
	{
		map->map[map->s_player.y][map->s_player.x] = '0';
		map->map[map->s_player.y][map->s_player.x + 1] = 'P';
		map->s_player.x = map->s_player.x + 1;
		map->s_player.movements++;
		win('W');
	}
}

void	pressleft(t_map *map)
{
	if (map->map[map->s_player.y][map->s_player.x - 1] == '0')
	{
		map->map[map->s_player.y][map->s_player.x] = '0';
		map->map[map->s_player.y][map->s_player.x - 1] = 'P';
		map->s_player.x = map->s_player.x - 1;
		map->s_player.movements++;
	}
	else if (map->map[map->s_player.y][map->s_player.x -1] == 'C')
	{
		map->map[map->s_player.y][map->s_player.x] = '0';
		map->map[map->s_player.y][map->s_player.x - 1] = 'P';
		map->s_player.x = map->s_player.x - 1;
		map->s_player.movements++;
		map->cigs--;
	}
	else if (map->map[map->s_player.y][map->s_player.x -1] == 'E' &&
			map->cigs == 0)
	{
		map->map[map->s_player.y][map->s_player.x] = '0';
		map->map[map->s_player.y][map->s_player.x - 1] = 'P';
		map->s_player.x = map->s_player.x - 1;
		map->s_player.movements++;
		win('W');
	}
}