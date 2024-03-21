/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-08 08:29:37 by agumina           #+#    #+#             */
/*   Updated: 2024-03-08 08:29:37 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_numeric(int num)
{
	if (num >= '0' && num <= '9')
		return (1);
	return (0);
}

int	check_if_numbers(int ac, char **av)
{
	int	i;
	int	n;

	i = 1;
	while (i < ac)
	{
		n = 0;
		while (av[i][n])
		{
			if (!ft_numeric(av[i][n]))
				return (0);
			n++;
		}
		i++;
	}
	return (1);
}

int	check_args(int ac, char **av)
{
	if (ac < 5 || ac > 6)
		return (printf("Error: invalid arguments number\n") * 0);
	if (!check_if_numbers(ac, av))
		return (printf("Error: invalid numeric input\n") * 0);
	return (1);
}
