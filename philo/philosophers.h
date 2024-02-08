/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:35:21 by agumina           #+#    #+#             */
/*   Updated: 2024/02/08 12:46:39 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <unistd.h>
# include <stdio.h>
# include <sys/time.h>
# include <semaphore.h>
# include <pthread.h>

typedef struct e_params
{
	int	n_of_philo;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	notepme;
}	t_params;

typedef struct s_philo
{
	pthread_mutex_t	fork;
	pthread_t		philot;
	t_params		*rules;
	pthread_mutex_t	*mutex_print;
	pthread_mutex_t	*left_fork;
	pthread_mutex_t	*right_fork;
	long long		public_time;
	int				id;
	long long		eating_start_time;
	long long		starve_time;
}	t_philo;

int	ft_atoi(const char *str);

#endif