/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelnych <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:09:55 by imelnych          #+#    #+#             */
/*   Updated: 2017/11/16 14:38:58 by imelnych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int ft_isvalid_size(char *figure)
{
	if (figure[4] == '\n' && figure[9] == '\n' && figure[14] == '\n'
    		&& figure[19] == '\n')
		return (1);
	return (0);
}

int ft_isfour_hash(char *figure)
{
	int i;
	int	hashcounter;
	int	hash;

	i = 0;
	hash = '#';
	hashcounter = 0;
	while (i < 21)
        {
        if (figure[i] == hash)
        	hashcounter++;
        i++;
        }
    if (hashcounter != 4)
        return (0);
    return (1);
}

int ft_isvalid_shape(char *figure)
{
	int		i;
	int		hashcounter;
	int		hash;

	hash = '#';
	i = 0;
	hashcounter = 0;
	while (i < 20)
	{
		if (figure[i] == hash)
		{
			if ((i + 1) < 20 && figure[i + 1] == hash)
				hashcounter++;
			if ((i - 1) >= 0 && figure[i - 1] == hash)
				hashcounter++;
			if ((i + 5) < 20 && figure[i + 5] == hash)
				hashcounter++;
			if ((i - 5) >= 0 && figure[i - 5] == hash)
				hashcounter++;
		}
		i++;
	}
	if (hashcounter == 6 || hashcounter == 8)
		return (1);
    else
    	return (0);
}

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
    	if (ft_isvalid_size(c))
			i = 0;
    	else
    		return (0);
    	if(ft_isfour_hash(c))
    		hashcounter = 0;
    	else return (0);
    	if (ft_isvalid_shape(c))
        	list = list->next;
        else
        	return (0);
    }
	return (1);
}
