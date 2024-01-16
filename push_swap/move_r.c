/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:21:33 by agumina           #+#    #+#             */
/*   Updated: 2024/01/10 20:16:56 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack, int flag)
{
	int	i;
	int	temp;

	if (!stack->size_a)
		return ;
	i = 0;
	temp = stack->stack_a[0];
	while (i < stack->size_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[i] = temp;
	if (flag)
		write(1, "ra\n", 3);
}

void	rb(t_stack *stack, int flag)
{
	int	i;
	int	temp;

	if (!stack->size_b)
		return ;
	i = 0;
	temp = stack->stack_b[0];
	while (i < stack->size_b - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[i] = temp;
	if (flag)
		write(1, "rb\n", 3);
}

void	rr(t_stack *stack, int flag)
{
	ra(stack, 0);
	rb(stack, 0);
	if (flag)
		write(1, "rr\n", 3);
}
