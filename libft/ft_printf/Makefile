# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juanherr <juanherr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/29 23:13:11 by juanherr          #+#    #+#              #
#    Updated: 2024/09/30 16:23:57 by juanherr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_put_hex_low.c ft_put_hex_upp.c ft_putnbr.c \
	   ft_putptr.c ft_putstr.c ft_put_unsigned.c ft_put_perc.c len_num.c

OBJS = $(SRCS:.c=.o)

RM = rm -f

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re
