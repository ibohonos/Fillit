/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:09:43 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/13 14:31:58 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list    *ft_set_list(t_list *list, int fd)
{
    char *buf;

    buf = ft_strnew(21);
    if (read(fd, buf, 21) != 0)
    {
        list->content = (char *)malloc(sizeof(char) * 21);
		list->content = buf;
        list->next = (t_list *)malloc(sizeof(t_list));
        list->next = ft_set_list(list->next, fd);
        return (list);
    }
    return (NULL);
}
