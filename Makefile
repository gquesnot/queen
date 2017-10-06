#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/09/30 20:21:34 by gquesnot          #+#    #+#             *#
#*   Updated: 2017/10/06 18:37:41 by gquesnot         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME	= queen

CFLAGS	= -Wall -Werror -Wextra -O3

LFLAGS = -L libft/ -lft

SRCS	= ft_print.c queen.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		gcc $(CFLAGS) -o $(NAME) $(OBJS) $(LFLAGS)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all
