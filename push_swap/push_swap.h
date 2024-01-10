/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:57:33 by agumina           #+#    #+#             */
/*   Updated: 2024/01/10 12:18:38 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "unistd.h"
# include "stdio.h"
# include "stdlib.h"
# include "stdarg.h"
# include "./libft/libft.h"

typedef struct e_stack{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
	int size_c;
	int	num_a;
	int	placed_number;
	int	min_num;
	int	nbr;
	int	*num;

}	t_stack;

int	main(int argc, char **argv);
int ordered(t_stack *stack)
void	pa(t_stack *stack, int flag);
void	pb(t_stack *stack, int flag);
void	rr(t_stack *stack, int flag);
void	rrb(t_stack *stack, int flag);
void	rra(t_stack *stack, int flag);
void	sa(t_stack *stack, int flag);
void	sb(t_stack *stack, int flag);
void	ra(t_stack *stack, int flag);
void	rb(t_stack *stack, int flag);
void	rrr(t_stack *stack, int flag);
void	ss(t_stack *stack, int flag);

#endif