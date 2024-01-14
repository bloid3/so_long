/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:35:24 by papereir          #+#    #+#             */
/*   Updated: 2024/01/14 12:52:19 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load(t_map *map)
{
	int	a;
	int	b;

	map->s_xpm.mlx_win = mlx_new_window(map->s_xpm.mlx,
			(map->width - 1) * SZEIMG, (map->height - 1) * SZEIMG, "Juego");
	map->s_xpm.wall = mlx_xpm_file_to_image(map->s_xpm.mlx,
			"textures/wall.xpm", &a, &b);
	map->s_xpm.door = mlx_xpm_file_to_image(map->s_xpm.mlx,
			"textures/door.xpm", &a, &b);
    map->s_xpm.cig = mlx_xpm_file_to_image(map->s_xpm.mlx,
			"textures/cig.xpm", &a, &b);
	map->s_xpm.p = mlx_xpm_file_to_image(map->s_xpm.mlx,
			"textures/player.xpm", &a, &b);
	map->s_xpm.floor = mlx_xpm_file_to_image(map->s_xpm.mlx,
			"textures/floor.xpm", &a, &b);
}

int	drawmap(t_map *map)
{	
	static int	i;
	static int	j;

	while (i < map->height - 1)
	{
		while (j < map->width)
		{
			drawassitant(map, i, j);
			j++;
		}
		j = 0;
		i++;
	}
	i = 0;
	return (0);
}
void	drawassitant(t_map *map, int i, int j)
{
	if (map->map[i][j] == '1' )
		mlx_put_image_to_window(map->s_xpm.mlx, map->s_xpm.mlx_win,
			map->s_xpm.wall, SZEIMG * j, SZEIMG * i);
	if (map->map[i][j] == '0')
		mlx_put_image_to_window(map->s_xpm.mlx, map->s_xpm.mlx_win,
			map->s_xpm.floor, SZEIMG * j, SZEIMG * i);
	if (map->map[i][j] == 'P')
	{
		mlx_put_image_to_window(map->s_xpm.mlx, map->s_xpm.mlx_win,
			map->s_xpm.floor, SZEIMG * j, SZEIMG * i);
		mlx_put_image_to_window(map->s_xpm.mlx, map->s_xpm.mlx_win,
			map->s_xpm.p, SZEIMG * j, SZEIMG * i);
	}
	if (map->map[i][j] == 'E')
	{
		mlx_put_image_to_window(map->s_xpm.mlx, map->s_xpm.mlx_win,
			map->s_xpm.door, SZEIMG * j, SZEIMG * i);
	}
	if (map->map[i][j] == 'C')
		mlx_put_image_to_window(map->s_xpm.mlx, map->s_xpm.mlx_win,
			map->s_xpm.cig, SZEIMG * j, SZEIMG * i);
}