/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:34:49 by agumina           #+#    #+#             */
/*   Updated: 2023/12/06 12:23:35 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include "./ft_printf/ft_printf.h"

void	signal_handler(int signal)
{
	static int	i;
	static int	c;

	if (signal == SIGUSR2)
	{
		c *= 2;
		c += 1;
		i++;
	}
	else
	{
		c *= 2;
		i++;
	}
	if (i == 8)
	{
		ft_printf("%c", c);
		c = 0;
		i = 0;
	}
}

int	main(void)
{
	pid_t					pid;
	struct sigaction		sa;

	pid = getpid();
	ft_printf("Server PID: %d\n", pid);
	sa.sa_handler = signal_handler;
	sa.sa_flags = SA_SIGINFO | SA_RESTART;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
}
