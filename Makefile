# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmaia-li <pmaia-li@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 09:03:42 by pmaia-li          #+#    #+#              #
#    Updated: 2022/12/05 15:38:10 by pmaia-li         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c    \
	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_strchr.c ft_strdup.c ft_strmapi.c ft_striteri.c ft_putendl_fd.c   \
	ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_putnbr_fd.c     \
	ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c            \
	ft_tolower.c ft_toupper.c ft_itoa.c ft_split.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
			ar -rcs $(NAME) $(OBJ)

bonus: $(NAME) $(BONUS_OBJS)
			ar -rcs $(NAME) $(BONUS_OBJS)

clean: 
	rm -f $(OBJ) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)