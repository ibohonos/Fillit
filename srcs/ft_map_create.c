/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:39:46 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/15 14:28:46 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char    *ft_map_create(int height, int width)
{
    int     i;
    int     j;
    char    *map;

    j = (width + 1) * height;
    map = (char *)malloc(sizeof(char) * j + 1);
    if (map == NULL)
    {
        ft_putstr(RED);
        ft_putstr("Map NULL\n");
        ft_putstr(RESET);
        return (NULL);
    }
    i = 0;
    while (i < j)
    {
        if (i == width)
        {
            map[i] = '\n';
            width += height + 1;
        }
        else
            map[i] = '.';
        i++;
    }
    return (map);
}
