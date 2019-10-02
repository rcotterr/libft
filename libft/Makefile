# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcotter- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/29 13:22:38 by rcotter-          #+#    #+#              #
#    Updated: 2018/12/13 09:22:03 by rcotter-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strlen.c ft_atoi.c ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
	ft_memcpy.c ft_memmove.c ft_memset.c ft_strcat.c ft_strcpy.c \
	ft_strdup.c ft_strncpy.c ft_strncat.c ft_strlcat.c ft_strchr.c \
	ft_strcmp.c ft_strstr.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_tolower.c ft_toupper.c ft_putchar.c ft_strclr.c ft_strequ.c \
	ft_strnequ.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memdel.c \
	ft_memalloc.c ft_strnew.c ft_strdel.c ft_striter.c ft_striteri.c \
	ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strsub.c ft_strmap.c \
	ft_strmapi.c ft_strsplit.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
	ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_swap.c ft_range.c \
	ft_foreach.c ft_count_if.c ft_is_negative.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) libft.h
	ar rc $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)
	/bin/rm -f *.o

re: fclean all
