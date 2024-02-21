/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:29:10 by agumina           #+#    #+#             */
/*   Updated: 2024/02/21 12:58:45 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	ft_lonely_philo(t_philo	*philo)
{
	if (philo->philo_id % 2 == 0)
		susleep(30);
	if (philo->params->n_of_philo == 1)
	{
		printf("%ld 1 has taken a fork\n",
			ft_get_time(philo->params->startime));
		susleep(philo->params->time_to_die);
	}
}

void	*ft_routine(void *filo)
{
	t_philo	*philo;

	philo = (t_philo *)filo;
	while (!philo->params->run)
		;
	philo->starve_time = ft_get_time(0);
	ft_lonely_philo(philo);
	while (philo->params->death && philo->notepme != 0)
	{
		ft_last_supper(philo);
		if (philo->params->death == 0)
			return (0);
		printf("%ld %d is sleeping\n",
			ft_get_time(philo->params->startime), philo->philo_id);
		susleep(philo->params->time_to_sleep);
		if (philo->params->death == 0)
			return (0);
		printf("%ld %d is thinking\n",
			ft_get_time(philo->params->startime), philo->philo_id);
	}
	return (0);
}

void	ft_last_supper(t_philo *philo)
{
	pthread_mutex_lock(&philo->forks);
	if (philo->params->death == 0)
		return ;
	printf("%ld %d has taken a fork\n",
		ft_get_time(philo->params->startime), philo->philo_id);
	pthread_mutex_lock(&philo->next->forks);
	if (philo->params->death == 0)
		return ;
	printf("%ld %d has taken a fork\n",
		ft_get_time(philo->params->startime), philo->philo_id);
	if (philo->params->death == 0)
		return ;
	printf("%ld %d is eating\n", ft_get_time(philo->params->startime),
		philo->philo_id);
	philo->notepme -= 1;
	philo->starve_time = ft_get_time(0);
	susleep(philo->params->time_to_eat);
	pthread_mutex_unlock(&philo->forks);
	pthread_mutex_unlock(&philo->next->forks);
}

void	*ft_dead_or_alive(void *filo)
{
	t_philo	*philo;

	philo = (t_philo *)filo;
	susleep(50);
	while (42)
	{
		if (((ft_get_time(0) - philo->starve_time)
				>= philo->params->time_to_die || !philo->params->death)
			&& philo->notepme != 0)
		{
			printf("%ld %d died\n",
				ft_get_time(philo->params->startime), philo->philo_id);
			philo->params->death = 0;
			break ;
		}
		philo = philo->next;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_params	params;
	t_philo		*philo;

	if (argc < 5 || argc > 6)
		return (printf("Error bad input\n"));
	if (check_args(argc, argv))
		return (printf("Invalid Input\n"));
	if (init(argc, argv, &params))
		return (printf("you have exceeded the max/min int value\n"));
	params.run = 0;
	philo = init_philo(&params);
	params.run = 1;
	init_thread(philo);
	join_threads(philo);
	free_all(philo);
	return (0);
}
