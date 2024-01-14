/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:57:36 by papereir          #+#    #+#             */
/*   Updated: 2024/01/14 12:06:00 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/* void    load(t_map *map)
{
	map->s_xpm.mlx_win = mlx_new_image(map->s_xpm.mlx, (map->width - 1) * SZEIMG, (map->height - 1) * SZEIMG);
	map->s_xpm.floor = mlx_
} */

void drawMapGuarro(t_map *map) {
	int i;
	int	j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
		{
			write(1, &map->map[i][j], 1);
			j++;
		}
		i++;
	}
}