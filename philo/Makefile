NAME = philo
SRCS = main.c
OBJS	= $(PHILO:.c=.o)
RM		= rm -f
CC		= gcc
FLAGS	= -Wall -Werror -Wextra

all: $(NAME)

%.o %.c
		$(CC) $(FLAGS) -c $< -o $@

fclean: clean
		$(RM) $(NAME)
clean:
		$(RM) $(OBJS)
re: fclean all