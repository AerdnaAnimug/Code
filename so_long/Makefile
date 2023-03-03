# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agumina <agumina@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 14:02:59 by agumina           #+#    #+#              #
#    Updated: 2023/03/03 16:20:56 by agumina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= so_long

SRCS	=	main.c

FLAGS	= -Wall -Wextra -Werror
CC		= gcc
OBJS	= $(SRCS:.c=.o)

%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@
$(NAME): ${OBJS}
	make -C mlx
	$(CC) $(OBJ) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

all: $(NAME)
clean:
	make -C mlx
	rm -f $(OBJS) $(BOBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all