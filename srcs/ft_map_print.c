/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:29:35 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/15 14:31:15 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri				create_new_tetri(char **position, int w, int h, char letter)
{
	t_tetri *new_tetri;

	new_tetri = ft_memalloc(sizeof(t_tetri));
	new_tetri->position = position;
	new_tetri->w = w;
	new_tetri->h = h;
	new_tetri->letter = letter;
	return (new_tetri);
}

hash_coordinates	ft_coordinates(int x, int y)
{
	hash_coordinates *new_hash_coord;

	new_hash_coord = ft_memalloc(sizeof(hash_coordinates));
	new_hash_coord->x = x;
	new_hash_coord->y = y;
	return (new_hash_coord);
}

void	find_min_max_position(char *figure, hash_coordinates *min_xy, hash_coordinates *max_xy)
{
	int i;

	i = 0;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			if (i / 5 < min->y)
				min->y = i / 5;
			if (i / 5 > max->y)
				max->y = i / 5;
			if (i % 5 < min->x)
				min->x = i % 5;
			if (i % 5 > max->x)
				max->x = i % 5;
		}
		i++;
	}
}


void	place_tetri(char *figure, char letter)
{
	hash_coordinates	min_xy;
	hash_coordinates	max_xy;
	char				**position;

	min_xy = ft_coordinates(0, 0);
	max_xy = ft_coordinates(3, 3);
	position = find_min_max_position(figure, min_xy, max_xy);
}

void	some_func_that_call_place_tetri(t_list *list)
{
	while (list)
	{	
		char	*c;
		char	letter;

		letter = 'A';
		c = list->content;
		place_tetri(c, letter++);
		list = list->next;
	}
}