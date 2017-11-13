/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 15:57:01 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/12 17:50:11 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	k;

	i = 0;
	j = 0;
	while (str[j] != '\0')
		j++;
	while (i < j / 2)
	{
		k = str[j - i - 1];
		str[j - i - 1] = str[i];
		str[i] = k;
		i++;
	}
	return (str);
}
