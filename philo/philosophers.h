/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:35:21 by agumina           #+#    #+#             */
/*   Updated: 2024/01/16 16:22:55 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include "unistd.h"
# include "stdio.h"
# include "string.h"
# include "stdlib.h"
# include <sys/time.h>
# include <semaphore.h>

typedef struct e_params
{
	int	number_of_philosophers;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	notepme;
}	t_params;

#endif