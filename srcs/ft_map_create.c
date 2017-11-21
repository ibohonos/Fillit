/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:39:46 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/21 11:37:03 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map    *ft_map_create(int width)
{
    int     i;
    int     j;
    t_map   *map;

    map = (t_map *)malloc(sizeof(t_map));
    if (map == NULL)
    {
        ft_putstr(RED);
        ft_putstr("Map NULL\n");
        ft_putstr(RESET);
        return (NULL);
    }
    map->size = width;
    map->map = (char **)malloc(sizeof(char *) * width);
    i = 0;
    while (i < width)
    {
        map->map[i] = ft_strnew(width);
        j = 0;
        while (j < width)
        {
            map->map[i][j] = '.';
            j++;
        }
        i++;
    }
    return (map);
}
