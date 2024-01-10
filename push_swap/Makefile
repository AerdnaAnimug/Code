NAME		= push_swap
LIBFT		= ./libft
LIBFT_LIB	= libft.a
SRCS		= main.c \
				algo.c \
				checks.c \
				move_s.c \
				move_p.c \
				move_r.c \
				move_rr.c \
				num_assign.c \
				sorter.c \
				

OBJS		= $(SRCS:.c=.o)
RM			= rm -f
LIBC		= ar -rcs
CC			= gcc
DEBUG		= gcc -g
LEAKS		= gcc -g -fsanitize=address
FLAGS		= -Wall -Werror -Wextra
INCS		= ./

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@


$(NAME): $(OBJS)
	make -C $(LIBFT)
	$(CC) $(LIBFT)/$(LIBFT_LIB) $(OBJS) -o $(NAME)

fclean: clean
	$(RM) $(NAME) $(LIBFT)/$(LIBFT_LIB)

clean:
	
	$(RM) $(OBJS)
	make clean -C $(LIBFT)

re: fclean all