NAME = philo
PHILO = main.c initialize.c utilis.c checks.c
OBJS	= $(PHILO:.c=.o)
RM		= rm -f
CC		= gcc
FLAGS	= -Wall -Werror -Wextra

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