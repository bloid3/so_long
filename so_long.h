/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:16:31 by papereir          #+#    #+#             */
/*   Updated: 2023/11/21 19:04:15 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <mlx.h>
# include <math.h>
# include "libft/libft.h"
# include <stdarg.h>
# define BUFFER_SIZE 42

//GNL FUNCTIONS

char	*ft_read_to_left_str(int fd, char *left_str);
char	*get_next_line(int fd);
char	*ft_get_line(char *left_str);
char	*ft_new_left_str(char *left_str);


typedef struct s_player
{
	int x;
	int y;
	int movements;
}t_player;

typedef struct s_xpm 
{
	void *mlx;
	void *mlx_win;
	void *wall;
	void *door;
	void *light;
	void *p;
	void *floor;
	void *open_door;
}t_xpm;

typedef struct s_map
{
	char **map;
	char **copy;
	int height;
	int width;
	int cigs;
	int player;
	int exit;
	t_xpm s_xpm;
	t_player s_player;
	
} t_map;


typedef struct	s_data { 
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}t_data;

t_map struct_init(t_map *map);
void   *get_map(char *file, t_map *map);
int isBer(char  *name);

#endif