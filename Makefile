# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 10:14:14 by ychahbi           #+#    #+#              #
#    Updated: 2022/11/09 19:45:21 by ychahbi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=cc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC_N = ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strrchr.c ft_toupper.c ft_calloc.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c
SRC_B = ft_lstadd_back.c   ft_lstclear.c   ft_lstiter.c  ft_lstmap.c  ft_lstsize.c ft_lstadd_front.c  ft_lstdelone.c  ft_lstlast.c  ft_lstnew.c
OBJ_N = $(SRC_N:.c=.o)
OBJ_B = $(SRC_B:.c=.o)

all: $(NAME) 

$(NAME): $(OBJ_N)
		ar rc $(NAME) $(OBJ_N)

%.o: %.c libft.h
		$(CC) -o $@ -c $< $(CFLAGS)

clean:
		$(RM) $(OBJ_N) $(OBJ_B)

fclean: clean
		$(RM) $(NAME)

bonus: $(OBJ_B)
	ar rc $(NAME) $(OBJ_B)

re: fclean all

.PHONY: clean fclean all re bonus
