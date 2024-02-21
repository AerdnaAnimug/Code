/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:04:42 by agumina           #+#    #+#             */
/*   Updated: 2024/02/21 12:53:34 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	init(int argc, char **argv, t_params *params)
{
	params->n_of_philo = ft_atoi(argv[1]);
	params->time_to_die = ft_atoi(argv[2]);
	params->time_to_eat = ft_atoi(argv[3]);
	params->time_to_sleep = ft_atoi(argv[4]);
	params->death = 1;
	params->startime = ft_get_time(0);
	if (argc == 6)
		params->notepme = ft_atoi(argv[5]);
	else
		params->notepme = -2;
	if (params->n_of_philo == -1
		|| params->time_to_die == -1
		|| params->time_to_eat == -1
		|| params->time_to_sleep == -1
		|| params->notepme == -1)
		return (1);
	return (0);
}

t_philo	*init_philo(t_params *params)
{
	t_philo	*first;
	t_philo	*philo;
	int		i;

	philo = (t_philo *) malloc(sizeof(t_philo));
	first = philo;
	i = 0;
	while (i < params->n_of_philo)
	{
		philo->params = params;
		philo->philo_id = i + 1;
		philo->notepme = params->notepme;
		if (i < params->n_of_philo - 1)
			philo->next = (t_philo *) malloc(sizeof(t_philo));
		else
			philo->next = first;
		pthread_mutex_init(&philo->forks, 0);
		philo = philo->next;
		i++;
	}
	philo = philo->next;
	return (philo);
}

void	init_thread(t_philo *philo)
{
	t_params		params;
	int				i;

	i = 0;
	while (i < philo->params->n_of_philo)
	{
		pthread_create(&philo->philot, NULL, ft_routine, (void *)philo);
		philo = philo->next;
		i++;
	}
	pthread_create(&params.pthrd_info, NULL, ft_dead_or_alive, (void *)philo);
}

void	join_threads(t_philo *philo)
{
	int	i;

	i = 0;
	while (i < philo->params->n_of_philo)
	{
		pthread_join(philo->philot, NULL);
		i++;
	}
}
