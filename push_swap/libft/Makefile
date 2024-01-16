# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agumina <agumina@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 17:12:01 by agumina           #+#    #+#              #
#    Updated: 2024/01/16 11:40:06 by agumina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_atoi.c ft_isdigit.c ft_split.c \
			ft_strjoin.c ft_strlen.c ft_substr.c
			
FLAGS	= -Wall -Wextra -Werror
CC		= gcc
OBJS	= $(SRCS:.c=.o)

.o:.c
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}
$(NAME): ${OBJS}
	ar rcs $(NAME) $(OBJS)

all: $(NAME)
clean:
	rm -f $(OBJS) $(BOBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all