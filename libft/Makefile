# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xagarcia <xagarcia@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 13:46:46 by xagarcia          #+#    #+#              #
#    Updated: 2022/10/20 14:29:23 by xagarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar -rcs
RM = rm -f

CC = gcc
FLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRC = ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c\
	  ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c ft_itoa.c\
	  ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c ft_strnstr.c\
	  ft_tolower.c ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c\
	  ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strrchr.c ft_toupper.c\
	  ft_calloc.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_split.c\
	  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c

OBJ = $(SRC:.c=.o)
HEADER = libft.h

all: $(NAME) 

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re .c.o bonus
