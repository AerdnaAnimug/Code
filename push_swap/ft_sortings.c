/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortings.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:35:28 by agumina           #+#    #+#             */
/*   Updated: 2024/01/30 10:23:14 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_set *set)
{
	if (ft_smaller(set) == set->set_a[0]
		&& ft_bigger(set) == set->set_a[1])
	{
		rra(set, 1);
		sa(set, 1);
	}
	if (ft_bigger(set) == set->set_a[0]
		&& ft_smaller(set) == set->set_a[2])
	{
		ra(set, 1);
		sa(set, 1);
	}
	if (ft_bigger(set) == set->set_a[0]
		&& ft_smaller(set) == set->set_a[1])
		ra(set, 1);
	if (ft_smaller(set) == set->set_a[1]
		&& ft_bigger(set) == set->set_a[2])
		sa(set, 1);
	if (ft_bigger(set) == set->set_a[1]
		&& ft_smaller(set) == set->set_a[2])
		rra(set, 1);
}

void	ft_sort_two(t_set *set)
{
	if (ft_smaller(set) != set->set_a[0])
		sa(set, 1);
}

void	ft_sort_five(t_set *set)
{
	while (set->size_a > set->size_l - 2)
	{
		while (set->set_a[0] == 4 || set->set_a[0] == 5)
			pb(set, 1);
		ra(set, 1);
	}
	ft_sort_three(set);
	if (set->set_b[0] == 5)
	{
		pa(set, 1);
		pa(set, 1);
		ra(set, 1);
		ra(set, 1);
		return ;
	}
	pa(set, 1);
	ra(set, 1);
	pa(set, 1);
	ra(set, 1);
}
