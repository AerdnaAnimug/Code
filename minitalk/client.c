/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:34:46 by agumina           #+#    #+#             */
/*   Updated: 2023/11/29 13:03:19 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include "../ft_printf/ft_printf.h"
#include "../libtft/libtf.h"

void ft_sendsignal(char *str, pid_t pid)
{
	int	i;

	while(*str)
	{
		while(++i < 8)
		{
		i = -1;
		if((*str >> i) % 2)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(1000);
		}
		str++;
	}
}

int	main(int argc, char **argv)
{
	pid_t		pid;
	struct sigaction	sa;

	if (argc != 3)
		exit(ft_printf("Error, correct usage: %s <server_pid> <message>\n", argv[0]));
	
	pid = ft_atoi(argv[1]);
	if (server_pid <= 0)
		exit(ft_printf("Error, <server_pid> must be higher than 0\n"));
	sa.sa_handler = ft_sendsignal(argc[2], pid);
}