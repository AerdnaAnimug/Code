/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:34:46 by agumina           #+#    #+#             */
/*   Updated: 2023/11/14 12:42:41 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include "../ft_printf/ft_printf.h"
#include "../libtft/libtf.h"

int	main(int argc, char **argv)
{
	pid_t		server_pid;
	struct sigaction	sa;

	if (argc != 3)
	{
		ft_printf("Error, correct usage: %s <server_pid> <message>\n", argv[0]);
		return (1);
	}
	server_pid = ft_atoi(argv[1]);
	if (server_pid <= 0)
	{
		ft_printf("Error, <server_pid> must be higher than 0\n")
		return (1);
	}
	sa.
}
