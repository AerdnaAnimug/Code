/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_r.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:21:33 by agumina           #+#    #+#             */
/*   Updated: 2024/01/30 10:23:14 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_set *set, int flag)
{
	int	i;
	int	tmp;

	if (!set || !set->size_a)
		return ;
	i = 0;
	tmp = set->set_a[0];
	while (i < set->size_a - 1)
	{
		set->set_a[i] = set->set_a[i + 1];
		i++;
	}
	set->set_a[i] = tmp;
	if (flag)
		write(1, "ra\n", 3);
}

void	rb(t_set *set, int flag)
{
	int	i;
	int	tmp;

	if (!set->size_b)
		return ;
	i = 0;
	tmp = set->set_b[0];
	while (i < set->size_b - 1)
	{
		set->set_b[i] = set->set_b[i + 1];
		i++;
	}
	set->set_b[i] = tmp;
	if (flag)
		write(1, "rb\n", 3);
}

void	rr(t_set *set, int flag)
{
	ra(set, 0);
	rb(set, 0);
	if (flag)
		write(1, "rr\n", 3);
}
