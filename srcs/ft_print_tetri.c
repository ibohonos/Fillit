/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:50:56 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/21 17:48:16 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print_tetri(t_tetri *tetri)
{
	int		i;
	char	**a;

	while (tetri != NULL)
	{
		i = 0;
		a = tetri->area;
		while (a[i] != NULL)
		{
			ft_putstr(CYN);
			ft_putendl(a[i++]);
			ft_putstr(RESET);
		}
		ft_putstr(GRN "ch: " RESET);
		ft_putstr(MAG);
		ft_putchar(tetri->letter);
		ft_putstr(RESET);
		ft_putstr(GRN " w: " RESET);
		ft_putstr(MAG);
		ft_putnbr(tetri->w);
		ft_putstr(RESET);
		ft_putstr(GRN " h: " RESET);
		ft_putstr(MAG);
		ft_putnbr(tetri->h);
		ft_putstr(RESET);
		ft_putstr(YEL "\n===================\n" RESET);
		tetri = tetri->next;
	}
}
