/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelnych <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:09:55 by imelnych          #+#    #+#             */
/*   Updated: 2017/11/15 19:26:42 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_isvalid(t_list *list)
{
	int		i;
	int		hashcounter;
	char	*c;
	int		hash;

	hash = '#';
	if (!list)
		return (0);
	while (list != NULL)
    {
    	c = list->content;
		// i = 0;
    	if (c[4] == '\n' && c[9] == '\n' && c[14] == '\n'
    		&& c[19] == '\n')
    		i = 0;
    	else
    		return (0);
    	hashcounter = 0;
        while (i < 21)
        {
        	if (c[i] == hash)
        		hashcounter++;
        	i++;
        }
        if (hashcounter != 4)
        	return (0);
        hashcounter = 0;
		i = 0;
		while (i < 20)
		{
			if (c[i] == hash)
			{
				if ((i + 1) < 20 && c[i + 1] == hash)
					hashcounter++;
				if ((i - 1) >= 0 && c[i - 1] == hash)
					hashcounter++;
				if ((i + 5) < 20 && c[i + 5] == hash)
					hashcounter++;
				if ((i - 5) >= 0 && c[i - 5] == hash)
					hashcounter++;
			}
			i++;
		}
		if (hashcounter == 6 || hashcounter == 8)
        	list = list->next;
        else
        	return (0);
    }
	return (1);
}
