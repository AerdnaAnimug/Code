/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-08 08:29:48 by agumina           #+#    #+#             */
/*   Updated: 2024-03-08 08:29:48 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void *routine(void *)
{
	printf("Thread is printing\n");
	return (NULL);
}

int logic(t_params *params)
{
	t_philos 	*philos;
	int			i;

	philos = malloc(params->n_of_philo * sizeof(t_philos));
	i = 0;
	while (i < params->n_of_philo)
	{
		pthread_create(&philos[i].pthreads, NULL, routine, (void *)philos);
		i++;
	}
	i = 0;
	while (i < params->n_of_philo)
	{
		pthread_join(philos[i].pthreads, (void *)philos);
		i++;
	}
	free(philos);
	return (1);
}

int	main(int ac, char **av)
{
	t_params	params;
	int	i;

	if (!check_args(ac, av))
		return (0);
	printf("fino a check_args tutto ok\n");
	if (!s_init(ac, av, &params))
		return (0);
	printf("fino a s_init tutto ok\n");
	i = logic(&params);
	return (i);
}
