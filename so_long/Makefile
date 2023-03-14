# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agumina <agumina@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 14:02:59 by agumina           #+#    #+#              #
#    Updated: 2023/03/14 14:50:23 by agumina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= so_long

SRCS	= main.c maker.c get_next_line.c get_next_line_utilis.c movements.c

FLAGS	= -Wall -Wextra -Werror
CC		= gcc
RM		= rm -f
OBJ		= $(SRCS:.c=.o)
%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@
$(NAME): $(OBJ)
	@make -C ./mlx
	@cp ./mlx/libmlx.dylib .
	$(CC) $(OBJ) -L ./mlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

all: $(NAME)
clean:
	@make -C ./mlx clean
	$(RM) $(OBJ)
fclean: clean
	rm -rf libmlx.dylib
	$(RM) $(NAME)
re: fclean all