/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:35:21 by agumina           #+#    #+#             */
/*   Updated: 2024/02/21 12:52:24 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H
# include <pthread.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/time.h>

typedef struct s_params
{
	pthread_t		pthrd_info;
	int				n_of_philo;
	int				time_to_die;
	int				time_to_sleep;
	int				time_to_eat;
	int				notepme;
	int				death;
	long			startime;
	int				mstime;
	int				run;
}	t_params;

typedef struct s_philo
{
	pthread_mutex_t	forks;
	struct s_philo	*next;
	pthread_t		philot;
	t_params		*params;
	int				philo_id;
	long			starve_time;
	int				notepme;
}	t_philo;

int			ft_atoi(const char *str);
int			ft_isdigit(int c);
int			check_args(int argc, char **argv);
int			init(int argc, char **argv, t_params *params);
t_philo		*init_philo(t_params *params);
void		init_thread(t_philo *philo);
void		join_threads(t_philo *philo);
void		ft_lonely_philo(t_philo	*philo);
void		*ft_routine(void *filo);
void		*ft_dead_or_alive(void *filo);
long		ft_get_time(long n);
void		free_all(t_philo *philo);
void		susleep(int ms);
void		ft_last_supper(t_philo	*philo);

#endif
