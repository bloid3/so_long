/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:18:59 by papereir          #+#    #+#             */
/*   Updated: 2024/01/02 19:44:00 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{
	t_map	map;

	map = struct_init(&map);
	if (argc != 2)
		return (0);
	isBer(argv[1]);
	map.s_xpm.mlx = mlx_init();
	get_map(argv[1], &map);
	drawMapGuarro(&map); 
	return (0);
}