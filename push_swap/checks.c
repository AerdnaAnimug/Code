/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:57:41 by agumina           #+#    #+#             */
/*   Updated: 2024/01/09 17:57:41 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_b(t_stack *stack) //stack b con tutti i valori a 0
{
	int	i;

	i = 0;
	stack->stack_b = (int *) malloc (stack->size_a * sizeof(int));
	while (i < stack->size_a)
	{
		stack->stack_b[i] = 0;
		i++;
	}
}

int	ft_smallest(t_stack *stack) //valore piu' piccolo di stack_a
{
	int	smallest;
	int	i;

	i = 0;
	smallest = 2147483647;
	while (i < stack->size_a)
	{
		if (stack->stack_a[i] < smallest)
		{
			smallest = stack->stack_a[i];
		}
		i++;
	}
	return (smallest);
}

int	ft_biggest(t_stack *stack) //valore piu' grande
{
	int	biggest;
	int	i;

	i = 0;
	biggest = 0;
	while (i < stack->size_a)
	{
		if (stack->stack_a[i] > biggest)
		{
			biggest = stack->stack_a[i];
		}
		i++;
	}
	return (biggest);
}

int	ft_is_ordered(t_stack *stack) //check se fosse ordinato in modo crescente
{
	int	i;

	i = 1;
	while (i < stack->size_a)
	{
		if (stack->stack_a[i] < stack->stack_a[i - 1])
			return (0);
		i++;
	}
	ft_free(stack);
	return (1);
}
