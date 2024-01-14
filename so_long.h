/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:16:31 by papereir          #+#    #+#             */
/*   Updated: 2024/01/14 13:53:39 by papereir         ###   ########.fr       */
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

// GNL //

char	*get_next_line(int fd);
char	*ft_read_to_left_str(int fd, char *left_str);
char	*ft_get_line(char *left_str);
char	*ft_new_left_str(char *left_str);
size_t	ft_strlen2(char *s);


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
	void *cig;
	void *p;
	void *floor;
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

enum {
	SZEIMG = 64,
	MAXWIDTH = 5120,
	MAXHEIGHT = 2880
};

/// KEYS

# define DESTROY 	17
# define ESC		53
# define UP			13
# define LEFT		0
# define DOWN		1
# define RIGHT		2

void	pressup(t_map *map);
void	pressdown(t_map *map);
void	pressright(t_map *map);
void	pressleft(t_map *map);

t_map	struct_init(t_map *map);
void	get_map(char *file, t_map *map);
void 	isBer(char  *name);
t_map	*lencheck(t_map *map);
t_map	*cornercheck(t_map *map);
int		error(char c);
t_map	*insidecheck(t_map *map);
t_map   *finalchecks(t_map *map);
void	extrachecker(t_map *map);
void	ultimatecheck(t_map *map);
void	posfinder(int *x, int *y, t_map *map);
void	checkitem(t_map *map, int y, int x);
void	pathcheck(t_map *map);
int		drawmap(t_map *map);
void	drawassitant(t_map *map, int i, int j);
int		key_detect(int keycode, t_map *map);
void	load(t_map *map);
int		win(char c);

#endif