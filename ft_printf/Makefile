NAME	=	libftprintf.a

SRCS	=	ft_printf.c \
			ft_putchar.c \
			ft_putint.c \
			ft_putstr.c \
			ft_putuns.c \
			ft_putptr.c \
			ft_putx.c \
			ft_puthex.c 

OBJS	=	$(SRCS:.c=.o)
RM		=	rm -f
LIBC	=	ar -rcs
FLAGS	=	-Wall -Wextra -Werror
INCS	=	.

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

$(NAME): ${OBJS}
	${LIBC} $(NAME) $(OBJS)

all: $(NAME)

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS)

re: fclean all