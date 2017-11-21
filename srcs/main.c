/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 20:38:21 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/21 11:44:08 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int main(int argc, char **argv)
{
    int		fd;
    int     width;
    t_map   *map;
    t_list	*list;

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
    list = (t_list *)malloc(sizeof(t_list));
    list = ft_set_list(list, fd);
    close(fd);
    if (ft_isvalid(list) != 1)
    {
        // ft_putendl("error");
        ft_putendl(RED "ERROR: File not valid." RESET);
        return (0);
    }
    width = 4;
    map = ft_map_create(width);
    some_func_that_call_place_tetri(list);
    ft_putstr(GRN);
    ft_map_print(map);
    ft_putstr(RESET);
    return (0);
}
