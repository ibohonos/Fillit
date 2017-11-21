/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_area.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:52:42 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/21 11:53:21 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_area	*ft_find_area(char *figure)
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
