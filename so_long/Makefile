# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agumina <agumina@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 14:02:59 by agumina           #+#    #+#              #
#    Updated: 2023/04/07 17:52:45 by agumina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= so_long

SRCS	= main.c \
			checkmap.c \
			draw_map.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_itoa.c \
			ft_printf.c \
			ft_putchar.c \
			ft_puthex.c \
			ft_putint.c \
			ft_putptr.c \
			ft_putstr.c \
			ft_putuns.c \
			ft_putx.c \
			ft_strdup.c \
			ft_strlcpy.c \
			ft_strlen.c \
			get_next_line_utilis.c \
			get_next_line.c \
			map_maker.c \
			player_moves.c \
			player_options.c \
			print_moves.c
			

FLAGS	= -Wall -Wextra -Werror
CC		= gcc
RM		= rm -f
OBJ		= $(SRCS:.c=.o)
%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@
$(NAME): $(OBJ)
	@make -C ./mlx
	@cp ./mlx/libmlx.dylib .
	$(CC) $(OBJ) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

all: $(NAME)
clean:
	@make -C ./mlx clean
	$(RM) $(OBJ)
fclean: clean
	$(RM) libmlx.dylib
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re