/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:54:42 by agumina           #+#    #+#             */
/*   Updated: 2023/12/13 10:51:08 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_size_count(int argc, char **argv, t_stack *stack)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *) malloc (sizeof(char));
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	if (argc != 1)
		exit(ft_printf("%s <list of integers>\n", argv[0]));
	ft_size_count(argv, stack);
}
