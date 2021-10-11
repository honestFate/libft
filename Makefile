# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: ndillon <ndillon@42.fr>                    +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/10/12 00:38:45 by ndillon           #+#    #+#             #
#   Updated: 2021/10/12 00:38:45 by ndillon          ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME = libft.a

C = clang

CFLAGS = -Wall -Wextra -Werror

SRCS =			ft_isalpha.c ft_isdigit.c ft_isalnum.c\
				ft_isascii.c ft_isprint.c ft_strlen.c\
				ft_memset.c ft_bzero.c ft_memcpy.c\
				ft_memmove.c ft_strlcpy.c ft_strlcat.c\
				ft_toupper.c ft_tolower.c ft_strchr.c\
				ft_strrchr.c ft_strncmp.c ft_memchr.c\
				ft_memcmp.c ft_strnstr.c ft_atoi.c\
				ft_calloc.c ft_strdup.c ft_substr.c\
				ft_strjoin.c ft_strtrim.c ft_itoa.c\
				ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
				ft_split.c

SRCS_BONUS =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
				ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
				ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = $(patsubst %.c,%.o,$(SRCS))
OBJ_B = $(patsubst %.c,%.o,$(SRCS_BONUS))

all : $(NAME)

so:
	gcc -fPIC -c $(SRCS)
	gcc -fPIC -c $(SRCS_BONUS)
	gcc -shared -o libft.so $(OBJ) $(OBJ_B)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c
	$(C) $(CFLAGS) -O2 -c $< -o $@

clean :
	@rm -f $(OBJ) $(OBJ_B)

fclean : clean
	@rm -f $(NAME)

re : fclean all

bonus :
	@make OBJ="$(OBJ_B)" all

.PHONY : all clean fclean re bonus
