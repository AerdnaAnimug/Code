# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agumina <agumina@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 20:20:27 by agumina           #+#    #+#              #
#    Updated: 2024/01/23 16:46:27 by agumina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = ./libft

LIBFT_LIB = libft.a

SRCS = main.c	\
		checks.c    \
		commands_r.c \
		commands_rr.c \
		commands_s.c  \
		commands_p.c \
		ft_sortings.c \
		algo.c    \
		num_assign.c \

OBJS	= $(SRCS:.c=.o)
RM		= rm -f
LIBC	= ar -rcs
CC		= gcc
DEBUG	= gcc -g
LEAKS   = gcc -g -fsanitize=address
FLAGS	= -Wall -Wextra -Werror
INCS	= ./

all: $(NAME)

%.o: %.c
	$(CC) -Wall -Wextra -Werror -c $< -o $@


$(NAME): $(OBJS)
	make -C $(LIBFT)
	$(CC) $(OBJS) $(LIBFT)/$(LIBFT_LIB) -o $(NAME)

fclean: clean
	$(RM) $(NAME) $(LIBFT)/$(LIBFT_LIB)

clean:
	
	$(RM) $(OBJS)
	make clean -C $(LIBFT)

re: fclean all
