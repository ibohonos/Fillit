/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_crop_tetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:54:12 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/23 17:24:02 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri	*ft_crop_tetri(t_tetri *tetri, t_list *list, int letter)
{
	t_area	*pos;
	int		i;

	if (list != NULL)
	{
		pos = ft_find_area(list->content);
		tetri->area = (char **)ft_memalloc(sizeof(char *) *
		(pos->max_y - pos->min_y + 2));
		i = 0;
		while (i < pos->max_y - pos->min_y + 1)
		{
			tetri->area[i] = ft_strnew(pos->max_x - pos->min_x + 1);
			ft_strncpy(tetri->area[i], list->content + (pos->min_x) +
			(i + pos->min_y) * 5, pos->max_x - pos->min_x + 1);
			i++;
		}
		tetri->area[i] = NULL;
		tetri->w = pos->max_x - pos->min_x + 1;
		tetri->h = pos->max_y - pos->min_y + 1;
		tetri->letter = letter++;
		tetri->next = (t_tetri *)malloc(sizeof(t_tetri));
		tetri->next = ft_crop_tetri(tetri->next, list->next, letter);
		return (tetri);
	}
	return (NULL);
}
