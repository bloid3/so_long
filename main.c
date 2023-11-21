/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:18:59 by papereir          #+#    #+#             */
/*   Updated: 2023/11/21 19:01:24 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{
	t_map	map;

	if (argc != 2)
		return (0);
	isBer(argv[1]);
	map = struct_init(&map);
	map.s_xpm.mlx = mlx_init();
	get_map(argv[1], &map);
	return (0);
}