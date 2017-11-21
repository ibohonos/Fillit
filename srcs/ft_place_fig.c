/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_fig.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:31:29 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/21 20:17:42 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	*ft_place_fig(t_map *map, t_tetri *tetri)
{
	int		i;
	int		j;
	int		x;
	int		y;

	i = 0;
	while (map->map[i] != NULL)
	{
		y = 0;
		while (tetri->area[y] != NULL)
		{
			x = 0;
			j = 0;
			while (tetri->area[y][x] != '\0')
			{
				if (tetri->area[y][x] == '#')
				{
					map->map[i][j] = (char)tetri->letter;
					j++;
				}
				x++;
			}
			y++;
			i++;
			tetri = tetri->next;
		}
		i++;
	}
	return (map);
}
