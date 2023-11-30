NAME_CLIENT = client
NAME_SERVER = server
CLIENT		= client.c
SERVER		= server.c
CLIENT_OBJ	= $(CLIENT:.c=.o)
SERVER_OBJ	= $(SERVER:.c=.o)
CC			= gcc
FLAGS		= -Wall -Werror -Wextra
RM			= rm -f

.o:.c
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

all: lib $(NAME_SERVER) $(NAME_CLIENT)

lib:
	make -C ./ft_printf

$(NAME_CLIENT):
		$(CC) $(FLAGS) $(CLIENT) ./ft_printf/libftprintf.a -o $(NAME_CLIENT)

$(NAME_SERVER):
		$(cc) $(FLAGS) $(SERVER) ./ft_printf/libftprintf.a -o $(NAME_SERVER)

clean:
		make clean -C ./ft_printf
		$(RM) $(CLIENT_OBJ) $(SERVER_OBJ)

fclean: clean
		make fclean -C ./ft_printf
		$(RM) $(NAME_CLIENT) $(NAME_SERVER)

re: fclean all