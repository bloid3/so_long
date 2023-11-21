/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:37:35 by papereir          #+#    #+#             */
/*   Updated: 2023/11/21 18:33:45 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_map struct_init(t_map *map)
{
    map->height = 0;
    map->cigs = 0;
    map->player = 0;
    map->exit = 0;
    map->s_player.x = 0;
    map->s_player.y = 0;
    map->s_player.movements = 0;
    return (*map);
}

t_map lencheck(t_map *map)
{
    
}