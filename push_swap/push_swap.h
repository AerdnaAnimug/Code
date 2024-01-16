/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 09:57:33 by agumina           #+#    #+#             */
/*   Updated: 2024/01/10 20:19:01 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "unistd.h"
# include "stdio.h"
# include "stdlib.h"
# include "stdarg.h"
# include "./libft/libft.h"

typedef struct e_stack
{
	int				*stack_a;
	int				*stack_b;
	int				size_a;
	int				size_l;
	int				size_b;
	int				num_a;
	int				placed_number;
	int				min_num;
	int				nbr;
	int				*num;

}	t_stack;

int		main(int argc, char **argv);
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
void	init_b(t_stack *stack);
int		ft_smallest(t_stack *stack);
int		ft_biggest(t_stack *stack);
void	ft_sort_three(t_stack *stack);
void	ft_sort_two(t_stack *stack);
int		ft_is_ordered(t_stack *stack);
void	push_all_b(t_stack *stack);
void	ft_num_stack(t_stack *stack);
void	ft_sort_five(t_stack *stack);
void	ft_arr_sort(t_stack *stack);
void	ft_empty_stack_a(t_stack *stack);
void	ft_big_push(t_stack *stack);
void	ft_freedom(t_stack *stack);

#endif