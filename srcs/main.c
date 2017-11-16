/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 20:38:21 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/16 18:32:04 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int main(int argc, char **argv)
{
    int		fd;
    int     ch;
    int     height;
    int     width;
    int     valid;
    char    *map;
    t_list	*list;
    t_list	*b_list;

    if (argc != 2)
    {
		ft_putendl(RED "ERROR: File name missing." RESET);
        return (0);
	}
    ch = 'A';
    list = (t_list *)malloc(sizeof(t_list));
    b_list = list;
    fd = open(argv[1], O_RDONLY);
    if (fd == 0)
    {
    	ft_putendl(RED "ERROR: File can not open." RESET);
    	return (0);
    }
    list = ft_set_list(list, fd);
    close(fd);
    valid = ft_isvalid(list);
    if (valid != 1)
    {
        // ft_putendl("error");
        ft_putendl(RED "ERROR: File not valid." RESET);
        return (0);
    }
    list = b_list;
    ft_list_print(list, ch);
    list = b_list;
    while (list->next->next != NULL)
        list = list->next;
    ft_putstr(MAG);
    ft_putstr(list->content);
    ft_putstr(RESET);
    height = 4;
    width = 4;
    map = ft_map_create(height, width);
    ft_putstr(GRN);
    ft_putstr(map);
    ft_putstr(RESET);
    return (0);
}
