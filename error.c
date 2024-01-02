/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:08:05 by papereir          #+#    #+#             */
/*   Updated: 2024/01/02 19:15:42 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void error(char c)
{
    if (c == 'N')
    {
        ft_putstr_fd("El archivo no es .ber", 1);
        exit(EXIT_FAILURE);
    }
    else if (c == 'R')
    {
        ft_putstr_fd("El mapa no es rectangular", 1);
        exit(EXIT_FAILURE);
    }
    else if (c == 'C')
    {
        ft_putstr_fd("El mapa no está correctamente cerrado", 1);
        exit(EXIT_FAILURE);
    }
    else if (c == 'I')
    {
        ft_putstr_fd("El mapa no tiene los items necesarios", 1);
        exit(EXIT_FAILURE);
    }
}