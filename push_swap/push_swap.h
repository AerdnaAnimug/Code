/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 09:57:33 by agumina           #+#    #+#             */
/*   Updated: 2024/01/30 10:23:14 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "unistd.h"
# include "stdio.h"
# include "stdlib.h"
# include "stdarg.h"
# include "./libft/libft.h"

typedef struct e_set
{
	int				*set_a;
	int				*set_b;
	int				size_a;
	int				size_l;
	int				size_b;
	int				*num;

}	t_set;

int		main(int argc, char **argv);
void	pa(t_set *set, int flag);
void	pb(t_set *set, int flag);
void	rr(t_set *set, int flag);
void	rrb(t_set *set, int flag);
void	rra(t_set *set, int flag);
void	sa(t_set *set, int flag);
void	sb(t_set *set, int flag);
void	ra(t_set *set, int flag);
void	rb(t_set *set, int flag);
void	rrr(t_set *set, int flag);
void	ss(t_set *set, int flag);
void	init_b(t_set *set);
int		ft_smaller(t_set *set);
int		ft_bigger(t_set *set);
void	ft_sort_three(t_set *set);
void	ft_sort_two(t_set *set);
int		ft_is_ordered(t_set *set);
void	push_all_b(t_set *set);
void	ft_num_set(t_set *set);
void	ft_sort_five(t_set *set);
void	ft_arr_sort(t_set *set);
void	ft_empty_set_a(t_set *set);
void	ft_push_all(t_set *set);
void	ft_free(t_set *set);

#endif