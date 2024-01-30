/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:21:28 by agumina           #+#    #+#             */
/*   Updated: 2024/01/30 10:23:14 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_set *set, int flag)
{
	int	i;

	if (!set->size_b)
		return ;
	i = set->size_a;
	while (i > 0)
	{
		set->set_a[i] = set->set_a[i - 1];
		i--;
	}
	set->set_a[0] = set->set_b[0];
	i = 0;
	while (i < set->size_b - 1)
	{
		set->set_b[i] = set->set_b[i + 1];
		i++;
	}
	set->set_b[i] = 0;
	set->size_b -= 1;
	set->size_a += 1;
	if (flag)
		write(1, "pa\n", 3);
}

void	pb(t_set *set, int flag)
{
	int	i;

	if (!set->size_a)
		return ;
	i = set->size_b;
	set->set_b[i] = 1;
	while (i > 0)
	{
		set->set_b[i] = set->set_b[i - 1];
		i--;
	}
	set->set_b[0] = set->set_a[0];
	i = 0;
	while (i < set->size_a - 1)
	{
		set->set_a[i] = set->set_a[i + 1];
		i++;
	}
	set->set_a[i] = 0;
	set->size_a -= 1;
	set->size_b += 1;
	if (flag)
		write(1, "pb\n", 3);
}
