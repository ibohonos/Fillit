/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_new_tetri.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:50:56 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/21 11:51:58 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri	*ft_create_new_tetri(char **area, int w, int h, char letter)
{
	t_tetri *new_tetri;

	new_tetri = ft_memalloc(sizeof(t_tetri));
	new_tetri->area = area;
	new_tetri->w = w;
	new_tetri->h = h;
	new_tetri->letter = letter;
	return (new_tetri);
}
