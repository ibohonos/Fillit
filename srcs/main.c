/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 20:38:21 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/13 18:56:14 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int main(int argc, char **argv)
{
    int		fd;
    int     ch;
    t_list	*list;
    t_list	*b_list;

    if (argc != 2)
    {
		ft_putstr(RED "ERROR: File name missing.\n" RESET);
        return (0);
	}
    ch = 'A';
    list = (t_list *)malloc(sizeof(t_list));
    b_list = list;
    fd = open(argv[1], O_RDONLY);
    if (fd == 0)
    {
    	ft_putstr(RED "ERROR: File can not open.\n" RESET);
    	return (0);
    }
    list = ft_set_list(list, fd);
    close(fd);
    list = b_list;
    ft_list_print(list, ch);
    ft_map_create();
    return (0);
}
