/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:28:21 by agumina           #+#    #+#             */
/*   Updated: 2024/01/30 10:33:52 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_binarylen(int n)
{
	int	i;

	i = 0;
	while (++i && n)
		n /= 2;
	return (i);
}

void	ft_push_all(t_set *set)
{
	int	i;
	int	k;
	int	c;

	k = -1;
	c = ft_binarylen(set->size_a);
	while (++k < c - 1)
	{
		i = set->size_a;
		while (--i >= 0)
		{
			if ((set->set_a[0] >> k) % 2 == 1)
				ra(set, 1);
			else
				pb(set, 1);
		}
		while (set->size_b > 0)
			pa(set, 1);
	}
}

void	push_all_b(t_set *set)
{
	if (set->size_a == 3)
		ft_sort_three(set);
	else if (set->size_a == 2)
		ft_sort_two(set);
	else if (set->size_a == 5)
		ft_sort_five(set);
	else
		ft_push_all(set);
}

void	ft_free(t_set *set)
{
		free(set->set_a);
		free(set->set_b);
		free(set->num);
}
