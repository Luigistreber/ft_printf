# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/04 15:27:54 by lubravo-          #+#    #+#              #
#    Updated: 2024/09/04 17:46:17 by lubravo-         ###   ########.fr        #
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

INCLUDE = libftprintf.h

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
