/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:04:42 by agumina           #+#    #+#             */
/*   Updated: 2024/02/08 13:08:31 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	ft_philo_init(int argc, char **argv, t_params params)
{
	t_philo	*philo;
	int		i;

	philo = (t_philo *)malloc(params.n_of_philo * sizeof(t_philo));
	if (philo == NULL)
		exit(printf("Merror"));
	i = 0;
	while (i < params.n_of_philo)
	{
		philo[i].left_fork = &forks[i];
		philo[i].right_fork = &forks[(i + 1) % params.n_of_philo];
		i++;
	}
}
