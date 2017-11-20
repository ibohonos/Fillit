/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:29:35 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/20 20:09:46 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri				create_new_tetri(char **area, int w, int h, char letter)
{
	t_tetri *new_tetri;

	new_tetri = ft_memalloc(sizeof(t_tetri));
	new_tetri->area = area;
	new_tetri->w = w;
	new_tetri->h = h;
	new_tetri->letter = letter;
	return (*new_tetri);
}

t_area	*find_area(char *figure)
{
	int		i;
	t_area	*pos;

	pos = ft_memalloc(sizeof(t_area));
	pos->min_x = 3;
	pos->min_y = 3;
	pos->max_x = 0;
	pos->max_y = 0;
	i = 0;
	while (i < 20)
	{
		if (figure[i] == '#')
		{
			if (i / 5 < pos->min_y)
				pos->min_y = i / 5;
			if (i / 5 > pos->max_y)
				pos->max_y = i / 5;
			if (i % 5 < pos->min_x)
				pos->min_x = i % 5;
			if (i % 5 > pos->max_x)
				pos->max_x = i % 5;
		}
		i++;
	}
	return (pos);
}


void	place_tetri(char *figure, int letter)
{
	t_area	*pos;
	int		i;
	int		j;
	char	**area;

	pos = find_area(figure);
	area = (char **)ft_memalloc(sizeof(char *) * (pos->max_y - pos->min_y + 2));
	i = 0;
	while (i < pos->max_y - pos->min_y + 1)
	{
		area[i] = ft_strnew(pos->max_x - pos->min_x + 1);
		ft_strncpy(area[i], figure + (pos->min_x) + (i + pos->min_y) * 5,
		pos->max_x - pos->min_x + 1);
		i++;
	}
	area[i] = NULL;
	i = 0;
	while (area[i] != NULL)
	{
		j = 0;
		ft_putstr(CYN);
		while (area[i][j] != '\0')
		{
			if (area[i][j] == '#')
				ft_putchar(letter);
			else
				ft_putchar(area[i][j]);
			j++;
		}
		// i = 0;
		// ft_putstr(area[i]);
		ft_putchar('\n');
		ft_putstr(RESET);
		i++;
	}
	// ft_putstr(figure);
	ft_putstr(GRN);
	ft_putchar(letter);
	ft_putstr(RESET);
	ft_putchar('\n');
	ft_putstr(YEL "=============\n" RESET);
	// return (area);
}

void	some_func_that_call_place_tetri(t_list *list)
{
	char	*c;
	int		letter;

	letter = 'A';
	while (list)
	{
		c = list->content;
		place_tetri(c, letter++);
		list = list->next;
	}
}
