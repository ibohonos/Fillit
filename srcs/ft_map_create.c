/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:39:46 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/13 20:15:24 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void    ft_map_create()
{
    int     i;
    int     j;
    int     height;
    int     width;
    char    **map;

    height = 4;
    width = 4;
    map = (char **)malloc(sizeof(char *) * (height * width + 1));
    if (map == NULL)
    {
        ft_putstr(RED);
        ft_putstr("map NULL\n");
        ft_putstr(RESET);
        return ;
    }
    i = 0;
    while (i < height)
    {
        j = 0;
        while (j < width)
        {
            map[i] = (char *)malloc(sizeof(char) * width);
            map[i][j] = '.';
            ft_putstr(GRN);
            ft_putchar(map[i][j]);
            ft_putstr(RESET);
            j++;
        }
        map[i][j] = '\n';
        ft_putchar(map[i][j]);
        i++;
    }
    // map[++i][++j] = '\0';
    // map[i] = NULL;
    // ft_putstr(RED);
    // ft_putstr("map[i++]\n");
    // ft_putstr(RESET);
    i = 0;
    while (i < height)
    {
        j = 0;
        ft_putstr(RED);
        while (map[i][j] != '\n')
            ft_putchar(map[i][j++]);
        // ft_putstr(map[i]);
        ft_putchar('\n');
        ft_putstr(RESET);
        i++;
    }
}
