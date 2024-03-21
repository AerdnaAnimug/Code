/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-08 08:34:32 by agumina           #+#    #+#             */
/*   Updated: 2024-03-08 08:34:32 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <pthread.h>

typedef struct s_params
{
	int		n_of_philo;
	int		time_to_die;
	int		time_to_sleep;
	int		time_to_eat;
	int		n_of_meals;
}	t_params;

typedef struct s_philos
{
	t_params		params;
	int				id;
	pthread_t			pthreads;
	pthread_mutex_t	forks;

}	t_philos;

int		check_args(int ac, char **av);
int		s_init(int ac, char **av, t_params *params);
int		ft_atoi(const char *str);
int 	logic(t_params *params);
#endif