NAME = philo
PHILO = main.c checks.c utilis.c initialize.c
OBJS = $(PHILO:.c=.o)
CC = gcc
FLAGS = -Wall -Werror -Wextra
RM = rm -f

.o:.c
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}:
		${CC} ${FLAGS} ${PHILO} -o ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all