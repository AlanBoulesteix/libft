# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboulest <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 17:06:08 by aboulest          #+#    #+#              #
#    Updated: 2022/11/08 10:44:21 by aboulest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MY_SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c \
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
	ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
	ft_toupper.c

MY_OBJECTS = $(MY_SRC:.c=.o)

CFLAGS += -Wall -Wextra -Werror -g

CUR_DIR = $(shell pwd)

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	cc -o $(NAME) $(MY_OBJECTS)

clean:
	$(RM) $(MY_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
