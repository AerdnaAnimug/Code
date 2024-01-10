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

int ordered(t_stack stack)
{
    int i;

    i = 1;
    while (i++ < stack->size_a)
    {
        if (stack->stack_a[i] < stack->stack_a[i - 1])
            return (0);
    }
    free(stack->stack_a);
	free(stack->stack_b);
	free(stack->num);
    return(1);
}