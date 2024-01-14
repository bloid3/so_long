/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:08:05 by papereir          #+#    #+#             */
/*   Updated: 2024/01/14 13:04:58 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int error(char c)
{
    if (c == 'N')
	{
		ft_putstr_fd("ERROR: The map archive is not .ber", 1);
		exit(EXIT_FAILURE);
	}
	else if (c == 'L')
	{
		ft_putstr_fd("ERROR: Not all the lines are the same len", 1);
		exit(EXIT_FAILURE);
	}
	else if (c == 'C')
	{
		ft_putstr_fd("ERROR: The map is not properly closed", 1);
		exit(EXIT_FAILURE);
	}
	else if (c == 'I')
	{
		ft_putstr_fd("ERROR: There is at least one invalid char", 1);
		exit(EXIT_FAILURE);
	}
	else if (c == 'P')
	{
		ft_putstr_fd("ERROR: Invalid Path",  1);
		exit(EXIT_FAILURE);
	}
	return (0);
}

int	win(char c)
{
	if (c == 'W')
	{
		ft_putstr_fd("Congratulations!, you won the game", 1);
		exit(EXIT_SUCCESS);
	}
	return (0);
}