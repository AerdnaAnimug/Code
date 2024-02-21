/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:27:11 by agumina           #+#    #+#             */
/*   Updated: 2024/02/21 12:47:51 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

long	ft_get_time(long n)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return (((tv.tv_sec) * 1000 + (tv.tv_usec) / 1000) - n);
}

void	susleep(int ms)
{
	long	start;

	start = ft_get_time(0);
	while (ft_get_time(start) < ms)
		usleep(100);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	size_t	num;

	num = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		sign = -1;
	else if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	if (num > 2147483647)
		return (-1);
	return (num * sign);
}

void	free_all(t_philo *philo)
{
	int	i;

	i = 0;
	while (i < philo->params->n_of_philo)
	{
		pthread_mutex_destroy(&philo->forks);
		free(philo);
		philo = philo->next;
		i++;
	}
}
