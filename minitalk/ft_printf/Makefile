NAME	=	libftprintf.a

SRCS	=	ft_printf.c \
			ft_putchar.c \
			ft_putint.c \
			ft_putstr.c \
			ft_putuns.c \
			ft_putptr.c \
			ft_putx.c \
			ft_puthex.c 

FLAGS = -Wall -Wextra -Werror
CC = gcc
OBJS = $(SRCS:.c=.o)
.o:.c
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}
$(NAME): ${OBJS}
	ar rcs $(NAME) $(OBJS)
all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all