/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-12 12:16:42 by agumina           #+#    #+#             */
/*   Updated: 2024-03-12 12:16:42 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	s_init(int ac, char **av, t_params *params)
{
	params->n_of_philo = ft_atoi(av[1]);
	params->time_to_die = ft_atoi(av[2]);
	params->time_to_sleep = ft_atoi(av[3]);
	params->time_to_eat = ft_atoi(av[4]);
	if (ac == 6)
		params->n_of_meals = ft_atoi(av[5]);
	return (1);
}
