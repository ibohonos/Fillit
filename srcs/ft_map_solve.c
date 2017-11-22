/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_solve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:15:00 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/22 17:04:53 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	*ft_map_solve(t_list *list)
{
	int		width;
	int		letter;
	t_map	*map;
	t_tetri	*tetri;

	letter = 'A';
	tetri = (t_tetri *)malloc(sizeof(t_tetri));
	width = ft_sqrt(ft_list_counter(list) * 4);
	map = ft_map_create(width);
	tetri = ft_place_tetri(tetri, list, letter);
	map = ft_place_fig(map, tetri, 0, 0);
	ft_print_tetri(tetri);
	return (map);
}
