/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:29:10 by agumina           #+#    #+#             */
/*   Updated: 2024/01/16 16:26:53 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_func(t_params params);

int	main(int argc, char **argv)
{
	t_params	params;

	if (argc != 6)
		exit(printf("Error"));
	number_of_philosophers = atoi(argv[1]);
	time_to_die = atoi(argv[2]);
	time_to_eat = atoi(argv[3]);
	time_to_sleep = atoi(argv[4]);
	notepme = atoi(argv[5]);
}
