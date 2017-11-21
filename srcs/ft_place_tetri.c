/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:54:12 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/21 11:54:41 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_place_tetri(char *figure, int letter)
{
	t_area	*pos;
	int		i;
	char	**area;

	pos = ft_find_area(figure);
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
		ft_putstr(CYN);
		ft_putstr(area[i]);
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
