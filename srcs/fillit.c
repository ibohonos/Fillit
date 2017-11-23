/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:31:48 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/23 17:08:59 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_errors()
{
	ft_putendl(RED "ERROR: File can not open." RESET);
	return ;
}

void	fillit(char *c)
{
	t_map	*map;
	t_list	*list;
	int		fd;
	int		len;

	fd = open(c, O_RDONLY);
	if (fd <= 0)
		ft_errors();
	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
	{
		ft_putendl(RED "ERROR: list NULL!" RESET);
		return ;
	}
	len = ft_check_len(fd);
	close(fd);
	fd = open(c, O_RDONLY);
	if (fd <= 0)
		ft_errors();
	if (!ft_check(fd, len))
	{
		ft_putendl("error");
		return ;
	}
	close(fd);
	fd = open(c, O_RDONLY);
	if (fd <= 0)
		ft_errors();
	list = ft_set_list(list, fd);
	if (ft_isvalid(list) != 1)
	{
		ft_putendl("error");
		return ;
	}
	close(fd);
	map = ft_map_solve(list);
	ft_map_print(map);
}
