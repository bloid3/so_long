/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:16:31 by papereir          #+#    #+#             */
/*   Updated: 2023/11/16 18:35:40 by papereir         ###   ########.fr       */
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

typedef struct s_player
{
	int	x;
	int	y;
	int	movements;
}t_player;
typedef struct s_xpm
{
	void	*mlx;
	void	*mlx_win;
	void	*wall;
	void	*door;
	void	*light;
	void	*p;
	void	*floor;
	void	*open_door;
}t_xpm;

typedef struct s_map
{
	char		**map;
	char		**copy;
	int			height;
	int			width;
	int			things;
	int			player;
	int			exit;
	t_xpm		s_xpm;
	t_player	s_player;		
}t_map;

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}t_data;
#endif