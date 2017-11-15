/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelnych <imelnych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:09:55 by imelnych          #+#    #+#             */
/*   Updated: 2017/11/15 19:15:50 by imelnych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_isvalid(t_list *list)
{
	int		i;
	int		hashcounter;
	char	*c;
	int		hash;
	int		count;

	hash = '#';
	if (!list)
		return (0);
	while (list != NULL)
    {
    	c = list->content;
    	if (c[4] == '\n' && c[9] == '\n' && c[14] == '\n'
    		&& c[19] == '\n' && c[20] == '\n')
    		i = 0;
    	else
    	{
    		ft_putendl("error");
    		return (0);
    	}
    	hashcounter = 0;
        while (i < 21)
        {
        	if (c[i] == hash)
        		hashcounter++;
        	i++;
        }
        if (hashcounter != 4)
        {
        	ft_putendl("error");
        	return (0);
        }
        hashcounter = 0;
		i = 0;
		while (i < 20)
		{
			if (str[i] == hash)
			{
				if ((i + 1) < 20 && str[i + 1] == hash)
					hashcounter++;
				if ((i - 1) >= 0 && str[i - 1] == hash)
					hashcounter++;
				if ((i + 5) < 20 && str[i + 5] == hash)
					hashcounter++;
				if ((i - 5) >= 0 && str[i - 5] == hash)
					hashcounter++;
			}
			i++;
		}
		if (hashcounter == 6 || hashcounter == 8)
        	list = list->next;
        else
        {
        	ft_putendl("error");
        	return (0);
        }
    }
}
