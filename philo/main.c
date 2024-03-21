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

void *routine(void)
{
	
	printf("Thread is printing\n");
}

t_params init_philo(t_params params);
{
	
}

int logic(t_philos *philos)
{
	t_params 	params;
	int			i;

	i = 0;
	while (i < params.n_of_philo)
	{
		pthread_create(&philos->pthreads, NULL, &routine, (void *)philos);
		i++;
	}
	pthread_join(philos->pthreads, (void *)philos);
	return (1);
}

int	main(int ac, char **av)
{
	t_params	params;
	int	i;

	if (!check_args(ac, av))
		return (0);
	if (s_init(ac, av, &params))
		return (1);
	i = logic(&params);
	return (i);
}
