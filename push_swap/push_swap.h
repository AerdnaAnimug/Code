/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 09:57:33 by agumina           #+#    #+#             */
/*   Updated: 2024/01/10 18:27:45 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stdlib.h"
# include "stdarg.h"
# include "unistd.h"
# include "stdio.h"

# include "./libft/libft.h"

typedef struct e_stack
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
	int	size_c;
	int	num_a;
	int	placed_number;
	int	min_num;
	int	nbr;
	int	*num;

}	t_stack;

int		main(int argc, char **argv);
int		ft_smallest(t_stack *stack);
int		ft_biggest(t_stack *stack);
void	ft_sort_three(t_stack *stack);
void	ft_sort_two(t_stack *stack);
int		ft_is_ordered(t_stack *stack);
void	push_all_b(t_stack *stack);
void	ft_num_stack(t_stack *stack);
void	ft_sort_five(t_stack *stack);
void	ft_bubb_sort(t_stack *stack);
void	ft_empty_stack_a(t_stack *stack);
void	ft_big_stack(t_stack *stack);
void	ft_free(t_stack *stack);
void	init_b(t_stack *stack);
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