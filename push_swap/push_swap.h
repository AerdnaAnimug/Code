/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:26:32 by agumina           #+#    #+#             */
/*   Updated: 2024/01/08 12:16:36 by agumina          ###   ########.fr       */
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
	int number_a;
}	t_stack;

int	main(int argc, char **argv);

#endif