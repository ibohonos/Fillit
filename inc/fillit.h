/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:44:03 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/20 18:39:28 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <fcntl.h>

# define RED   "\x1B[31m"
# define GRN   "\x1B[32m"
# define YEL   "\x1B[33m"
# define BLU   "\x1B[34m"
# define MAG   "\x1B[35m"
# define CYN   "\x1B[36m"
# define WHT   "\x1B[37m"
# define RESET "\x1B[0m"

typedef struct	s_map
{
	int			size;
	char		**array;
}				t_map;

typedef struct	s_tetri
{
	char		**area;
	int			w;
	int			h;
	char		letter;
}				t_tetri;

typedef struct	s_area
{
	int			min_x;
	int			min_y;
	int			max_x;
	int			max_y;
}				t_area;

t_list 			*ft_set_list(t_list *list, int fd);
void    		ft_list_print(t_list *lst, int ch);
char    		*ft_map_create();
int				ft_isvalid(t_list *list);
void			some_func_that_call_place_tetri(t_list *list);

#endif
