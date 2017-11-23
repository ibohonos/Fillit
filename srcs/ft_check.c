/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:51:08 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/23 17:17:56 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_check_len(int fd)
{
	char	*buf;
	int		len;

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
