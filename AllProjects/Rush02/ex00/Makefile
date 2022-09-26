# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epellone <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/25 20:15:43 by epellone          #+#    #+#              #
#    Updated: 2022/09/26 15:59:26 by agumina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = dictionary.c rush02.c utils.c
CFLAGS =-Wextra -Wall -Werror
CC = gcc  $(CFLAGS)

all:
	$(CC) $(SRCS) main.c -o rush-02

fclean:
	rm -f rush-02
