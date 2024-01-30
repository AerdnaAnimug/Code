/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:58:11 by agumina           #+#    #+#             */
/*   Updated: 2024/01/30 10:23:14 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_set *set, int flag)
{
	int	i;
	int	tmp;

	if (!set->size_a)
		return ;
	i = set->size_a - 1;
	tmp = set->set_a[i];
	while (i > 0)
	{
		set->set_a[i] = set->set_a[i - 1];
		i--;
	}
	set->set_a[i] = tmp;
	if (flag)
		write(1, "rra\n", 4);
}

void	rrb(t_set *set, int flag)
{
	int	i;
	int	tmp;

	if (!set->size_b)
		return ;
	i = set->size_b - 1;
	tmp = set->set_b[i];
	while (i > 0)
	{
		set->set_b[i] = set->set_b[i - 1];
		i--;
	}
	set->set_b[i] = tmp;
	if (flag)
		write(1, "rrb\n", 4);
}

void	rrr(t_set *set, int flag)
{
	rra(set, 0);
	rrb(set, 0);
	if (flag)
		write(1, "rrr\n", 4);
}
