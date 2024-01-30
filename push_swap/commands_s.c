/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:21:35 by agumina           #+#    #+#             */
/*   Updated: 2024/01/30 10:23:14 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_set *set, int flag)
{
	int	tmp;

	if (!set->size_a)
		return ;
	tmp = set->set_a[0];
	set->set_a[0] = set->set_a[1];
	set->set_a[1] = tmp;
	if (flag)
		write(1, "sa\n", 3);
}

void	sb(t_set *set, int flag)
{
	int	tmp;

	if (!set->size_b)
		return ;
	tmp = set->set_b[0];
	set->set_b[0] = set->set_b[1];
	set->set_b[1] = tmp;
	if (flag)
		write(1, "sb\n", 3);
}

void	ss(t_set *set, int flag)
{
	sa(set, 0);
	sb(set, 0);
	if (flag)
		write(1, "ss\n", 3);
}
