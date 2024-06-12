# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 19:31:46 by luigi_streb       #+#    #+#              #
#    Updated: 2024/06/11 22:48:12 by luigi_streb      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

UTILS = ft_putchar.c\
		ft_putnbr.c\
		ft_put_unsignedint.c\
		ft_putstr.c\
		ft_put_hex.c\
		ft_put_ptr.c\
		ft_printf.c\
		ft_specifier.c		

INCLUDE = libftprinth.h

OBJS = $(UTILS:.c=.o)

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re 