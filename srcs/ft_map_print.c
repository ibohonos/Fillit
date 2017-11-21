/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:29:35 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/21 16:46:36 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_map_print(t_map *map)
{
	int i;

	i = 0;
	while (i < map->size)
		ft_putendl(map->map[i++]);
}
