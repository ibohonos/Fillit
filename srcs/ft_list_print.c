/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:47:57 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/13 13:24:07 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void    ft_list_print(t_list *lst, int ch)
{
    while (lst != NULL)
    {
        ft_putstr(CYN);
        ft_putstr(lst->content);
        ft_putstr(RESET);
        ft_putstr(GRN);
        ft_putchar(ch++);
        ft_putstr("\n" RESET);
        ft_putstr(YEL "=============\n" RESET);
        lst = lst->next;
    }
}
