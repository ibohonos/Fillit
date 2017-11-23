/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 20:38:21 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/23 17:26:26 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_errors(void)
{
	ft_putendl(RED "ERROR: File can not open." RESET);
	return ;
}

int		main(int argc, char **argv)
{
	int		fd;
	int		len;

	if (argc != 2)
	{
		ft_putendl(RED "ERROR: File name missing." RESET);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd <= 0)
		ft_errors();
	len = ft_check_len(fd);
	close(fd);
	fd = open(argv[1], O_RDONLY);
	if (fd <= 0)
		ft_errors();
	if (!ft_check(fd, len))
	{
		ft_putendl("error");
		return (0);
	}
	close(fd);
	fillit(argv[1]);
	return (0);
}
