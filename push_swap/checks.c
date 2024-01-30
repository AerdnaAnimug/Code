/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:57:41 by agumina           #+#    #+#             */
/*   Updated: 2024/01/30 10:23:14 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_b(t_set *set)
{
	int	i;

	i = 0;
	set->set_b = (int *) malloc (set->size_a * sizeof(int));
	while (i < set->size_a)
	{
		set->set_b[i] = 0;
		i++;
	}
}

int	ft_smaller(t_set *set)
{
	int	smaller;
	int	i;

	i = 0;
	smaller = 2147483647;
	while (i < set->size_a)
	{
		if (set->set_a[i] < smaller)
		{
			smaller = set->set_a[i];
		}
		i++;
	}
	return (smaller);
}

int	ft_bigger(t_set *set)
{
	int	bigger;
	int	i;

	i = 0;
	bigger = 0;
	while (i < set->size_a)
	{
		if (set->set_a[i] > bigger)
		{
			bigger = set->set_a[i];
		}
		i++;
	}
	return (bigger);
}

int	ft_is_ordered(t_set *set)
{
	int	i;

	i = 1;
	while (i < set->size_a)
	{
		if (set->set_a[i] < set->set_a[i - 1])
			return (0);
		i++;
	}
	free(set->set_a);
	return (1);
}
