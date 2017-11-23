/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_fig.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:31:29 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/23 18:20:20 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_set_tetri(t_tetri *tetri, t_map *map, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < tetri->w)
	{
		j = 0;
		while (j < tetri->h)
		{
			if (tetri->area[j][i] == '#')
				map->map[y + j][x + i] = tetri->letter;
			j++;
		}
		i++;
	}
}

void	ft_refresh_map(t_tetri *tetri, t_map *map, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < tetri->w)
	{
		j = 0;
		while (j < tetri->h)
		{
			if (tetri->area[j][i] == '#')
				map->map[y + j][x + i] = '.';
			j++;
		}
		i++;
	}
}

int		ft_check_place(t_tetri *tetri, t_map *map, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < tetri->w)
	{
		j = 0;
		while (j < tetri->h)
		{
			if (tetri->area[j][i] == '#' && map->map[y + j][x + i] != '.')
				return (0);
			j++;
		}
		i++;
	}
	ft_set_tetri(tetri, map, x, y);
	return (1);
}

int		ft_place_fig(t_map *map, t_tetri *tetri)
{
	int i;
	int j;

	if (tetri == NULL)
		return (1);
	i = 0;
	while (i <= map->size - tetri->h)
	{
		j = 0;
		while (j <= map->size - tetri->w)
		{
			if (ft_check_place(tetri, map, j, i))
			{
				if (ft_place_fig(map, tetri->next))
					return (1);
				else
					ft_refresh_map(tetri, map, j, i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
