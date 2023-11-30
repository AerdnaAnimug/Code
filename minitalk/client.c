/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:34:46 by agumina           #+#    #+#             */
/*   Updated: 2023/11/30 11:51:07 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include "./ft_printf/ft_printf.h"

void	sign_handler(int signal)
{
	if (signal == SIGUSR1)
		printf("Message sent");
}

void	ft_sendsignal(char *str, pid_t pid)
{
	int	i;

	while (*str)
	{
		while (++i < 8)
		{
			i = -1;
			if ((*str >> i) % 2)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(1000);
		}
		str++;
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * sign);
}

int	main(int argc, char **argv)
{
	pid_t				pid;
	struct sigaction	sa;

	if (argc != 3)
		exit(ft_printf("%s<server_pid> <message>\n", argv[0]));
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
		exit(ft_printf("Error, <server_pid> must be higher than 0\n"));
	sa.sa_handler = sign_handler;
	ft_sendsignal(argv[2], pid);
}
