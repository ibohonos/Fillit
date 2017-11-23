/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:51:08 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/23 16:55:07 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

// int	ft_check(int fd)
// {
// 	int		i;
// 	char	*buf;
//
// 	buf = ft_strnew(21);
// 	i = 0;
// 	while(read(fd, buf, 21) != 0)
// 	{
// 		if (buf[i] == '\n' && buf[i + 1] == '\n' && buf[i + 2] == '\n')
// 		{
// 			return (1);
// 		}
// 		i++;
// 	}
// 	return (0);
// }

int	ft_check_len(int fd)
{
	char	*buf;
	int 	len;

	len = 0;
	buf = ft_strnew(1);
	while (read(fd, buf, 1) != 0)
		len++;
	return (len);
}

int	ft_check(int fd, int len)
{
	char	*buf;

	buf = ft_strnew(len);
	while (read(fd, buf, len))
	{
		if (buf[len] == '\0' && buf[len - 1] == '\n' && buf[len - 2] == '\n')
			return (0);
	}
	return (1);
}
