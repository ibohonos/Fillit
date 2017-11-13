/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim_tet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:31:24 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/13 18:38:45 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void    ft_trim_tet(t_list *list)
{
    int     i;
    int     j;
    int     ch;
    char    *con;
    char    *temp;

    ch = 'A';
    temp = (char *)malloc(sizeof(char) * 5);
    while (list != NULL)
    {
        i = 0;
        con = list->content;
        ft_putstr(MAG);
        while (con[i] != '\0')
        {
            j = 0;
            while (con[i] != '\n')
            {
                if (con[i] == '.')
                    temp[j] = '.';
                else if (con[i] == '#')

                i++;
            }
            ft_putchar('\n');
            i++;
        }
        list = list->next;
        ft_putstr(RESET);
        ft_putstr(GRN);
        ft_putchar(ch++);
        ft_putstr("\n" RESET);
        ft_putstr(YEL "=============\n" RESET);
    }
}
