# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: papereir <papereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 18:14:37 by papereir          #+#    #+#              #
#    Updated: 2023/11/16 18:20:14 by papereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = gcc
CFLAGS = -I. -Wall -Wextra -Werror -g3

SRCS = main.c
OBJS = $(SRCS:.c=.o)

LIBMLX = minilibx/
LIBFT = libft/
LIBFTA = libft/libft.a
MINILIB = minilibx/libmlx.a

%.o: %.c
	$(CC) $(CFLAGS) -Imlx -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -C $(LIBMLX)
	@$(MAKE) -C $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFTA) $(MINILIB) -Lmlx -lmlx -framework OpenGL -framework AppKit -L. -o $(NAME)

clean:
	rm -f $(OBJS)
	@$(MAKE) clean -C $(LIBMLX)
	@$(MAKE) clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME)
	rm $(LIBFTA)

norme:
	@norminette
re: fclean all