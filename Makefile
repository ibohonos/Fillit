# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 19:23:35 by ibohonos          #+#    #+#              #
#    Updated: 2017/11/23 15:55:45 by ibohonos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC_DIR 	= ./srcs
INCL_DIR 	= ./inc
OBJ_DIR		= ./obj
LIB_DIR 	= ./libft
LIB_SRC_DIR = $(LIB_DIR)/srcs
LIB_OBJ_DIR = $(LIB_DIR)/obj

SRC 	= main.c fillit.c ft_set_list.c ft_list_print.c ft_map_create.c \
			ft_isvalid.c ft_map_print.c ft_find_area.c \
			ft_crop_tetri.c ft_list_counter.c ft_sqrt.c ft_map_solve.c \
			ft_map_free.c ft_place_fig.c ft_check.c
OBJ 	= $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))
LIB 	= libft.a
LIB_SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd.c ft_lstdel.c \
			ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c \
			ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c \
			ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putchar.c ft_putendl.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c \
			ft_putstr.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c \
			ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c \
			ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c \
			ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c \
			ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strrev.c ft_strsplit.c \
			ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c
LIB_INC = libft.h
LIB_OBJ = $(addprefix $(LIB_OBJ_DIR)/,$(LIB_SRC:.c=.o))
LIB_M 	= $(CC) $(FLAGS) -c $(LIB_SRC)
LIB_AR 	= ar rc $(LIB) $(LIB_OBJ)
LIB_RAN = ranlib $(LIB)

all: $(NAME)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) $(FLAGS) -I $(INCL_DIR) -o $@ -c $<

$(LIB_OBJ_DIR)/%.o:$(LIB_SRC_DIR)/%.c
	$(CC) $(FLAGS) -I $(LIB_INC) -o $@ -c $<

$(NAME):
	@mkdir -p $(OBJ_DIR)
	@$(MAKE) $(OBJ)
	@mkdir -p $(LIB_OBJ_DIR)
	@$(MAKE) $(LIB_OBJ)
	@$(LIB_AR)
	$(LIB_RAN)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(LIB)

clean:
	/bin/rm -rf $(OBJ_DIR) $(LIB_OBJ_DIR)

fclean: clean
	/bin/rm -rf $(LIB)
	/bin/rm -rf $(LIB_DIR)/$(LIB)
	/bin/rm -rf $(NAME)

re: fclean all
