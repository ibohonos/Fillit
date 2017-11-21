/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:31:48 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/21 18:06:02 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	fillit(int fd)
{
	int		width;
	t_map	*map;
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
	{
		ft_putendl(RED "ERROR: list NULL!" RESET);
		return ;
	}
	list = ft_set_list(list, fd);
	if (ft_isvalid(list) != 1)
	{
		// ft_putendl("error");
		ft_putendl(RED "ERROR: File not valid." RESET);
		return ;
	}
	width = 4;
	map = ft_map_solve(list);
	ft_putstr(MAG);
	ft_map_print(map);
	ft_putstr(RESET);
}
