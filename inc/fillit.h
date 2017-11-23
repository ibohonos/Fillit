/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:44:03 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/23 17:20:02 by ibohonos         ###   ########.fr       */
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

typedef struct		s_map
{
	int				size;
	char			**map;
}					t_map;

typedef struct		s_tetri
{
	char			**area;
	int				w;
	int				h;
	int				letter;
	struct s_tetri	*next;
}					t_tetri;

typedef struct		s_area
{
	int				min_x;
	int				min_y;
	int				max_x;
	int				max_y;
}					t_area;

int					ft_check(int fd, int len);
int					ft_place_fig(t_map *map, t_tetri *tetri);
t_list				*ft_set_list(t_list *list, int fd);
void				ft_list_print(t_list *lst, int ch);
t_map				*ft_map_create(int width);
int					ft_isvalid(t_list *list);
void				ft_print_tetri(t_tetri *tetri);
t_area				*ft_find_area(char *figure);
t_tetri				*ft_crop_tetri(t_tetri *tetri, t_list *list, int letter);
void				ft_map_print(t_map *map);
void				fillit(char *c);
int					ft_list_counter(t_list *list);
int					ft_sqrt(int nb);
t_map				*ft_map_solve(t_list *list);
t_map				*ft_map_free(t_map *map);
int					ft_check_len(int fd);
void				ft_errors();

#endif
