/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:09:28 by agumina           #+#    #+#             */
/*   Updated: 2023/03/29 14:30:59 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	*null_error(char *message)
{
	ft_printf("\033[0;31m" " Error\n    %s\n" "\033[0m", message);
	exit(1);
}

void	*null_error_freemap(char *message, int fd, char	**map)
{
	ft_printf("\033[0;31m" " Error\n    %s\n" "\033[0m", message);
	close(fd);
	free(map);
	exit(1);
}

void	*null_error_wfile(char *message, int fd)
{
	ft_printf("\033[0;31m" " Error\n    %s\n" "\033[0m", message);
	close(fd);
	exit(1);
}

void	null_error_woexit(char *message)
{
	ft_printf("\033[0;31m" " Error\n    %s\n" "\033[0m", message);
	return ;
}

void	win(char *message)
{
	ft_printf("\033[0;32m" "%s\n" "\033[0m", message);
	exit(1);
}
