/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:29:35 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/21 11:55:16 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_map_print(t_map *map)
{
	int i;

	i = 0;
	while (i < map->size)
		ft_putendl(map->map[i++]);
}

void	some_func_that_call_place_tetri(t_list *list)
{
	char	*c;
	int		letter;

	letter = 'A';
	while (list)
	{
		c = list->content;
		ft_place_tetri(c, letter++);
		list = list->next;
	}
}
