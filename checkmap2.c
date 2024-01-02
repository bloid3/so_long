/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:27:25 by papereir          #+#    #+#             */
/*   Updated: 2024/01/02 19:16:22 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_map   *checkitems(t_map *map)
{
    int     i;
    int     j;

    i = 0;
    while (i < map->height - 1)
    {
        j = 0;
        while (j < map->width)
        {
            if (map->map[i][j] != '1' && map->map[i][j] != '0'
			&& map->map[i][j] != '\0' && map->map[i][j] != 'C'
			&& map->map[i][j] != 'E' && map->map[i][j] != 'P')
			{
                error('I');
                j++;
            }
        }
    i++;
    }
    return (map);
}

/* t_map   *checkpath(t_map *map)
{
    
}

t_map   *finalchecks(t_map *map)
{
    
} */