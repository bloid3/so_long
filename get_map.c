/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:15:51 by papereir          #+#    #+#             */
/*   Updated: 2023/11/21 19:03:35 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void   *get_map(char *file, t_map *map)
{
	char    *line;
	char    *f;
	int     fd;

	fd = open(file, O_RDONLY);
	line = get_next_line(fd);
	map->width = ft_strlen(line);
	f = malloc(map->width);
	map->height++;
	while (line)
	{
		f = ft_strjoin(f, line);
		free(line);
		map->height++;
	}
	free(line);
	map->map = ft_split(f, "\n");
	map->copy = ft_split(f, "\n");
	lencheck(map);
}

int isBer(char  *name)
{
	const char  *suffix;
	int         nameLen;
	
	suffix = ".ber";
	nameLen = ft_strlen(name);
	if (nameLen >= 4)
	{
		if (ft_strncmp(name + nameLen - 4, suffix, 4) == 0) {
            return 1;
        }
	}
}