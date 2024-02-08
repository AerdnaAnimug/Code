/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:29:10 by agumina           #+#    #+#             */
/*   Updated: 2024/02/08 12:46:39 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	check_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_params	params;
	t_philo		*philo;

	if (argc < 5 || argc > 6)
		exit(printf("Error"));
	if (!check_args(argc, argv))
		exit(printf("Error"));
	params.n_of_philo = ft_atoi(argv[1]);
	params.time_to_die = ft_atoi(argv[2]);
	params.time_to_eat = ft_atoi(argv[3]);
	params.time_to_sleep = ft_atoi(argv[4]);
	if (argc == 6)
		params.notepme = ft_atoi(argv[5]);
	ft_philo_init(argc, argv, &params);
}
