/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 20:38:21 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/21 22:02:55 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		ft_putendl(RED "ERROR: File name missing." RESET);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd <= 0)
	{
		ft_putendl(RED "ERROR: File can not open." RESET);
		return (0);
	}
	fillit(fd);
	close(fd);
	return (0);
}
