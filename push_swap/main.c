/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:58:08 by agumina           #+#    #+#             */
/*   Updated: 2024/01/10 11:01:16 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	check_dups(t_stack stack)
{
	int	i;
	int	n;

	i = 0;
	while (i++ < stack->size_a)
	{
		n = i + 1;
		while (n < stack->size_a[n])
		{
			if (stack->size_a[i] == stack->size[n])
				exit(write(2, "Error: Duplicates has been given\n", 33));
			n++;
		}
	}	
}

void	ft_size_count(int argc, char **argv, t_stack *stack)
{
	int		i;
	char	*temp;
	char	**temp1;

	i = 0;
	temp = (char *) malloc (sizeof(char));
	temp[0] = 0;
	while (++i < argc)
	{
		temp = ft_strjoin(temp, argv[i]);
		temp = ft_strjoin(temp, " ");
	}
	temp1 = ft_split(temp, ' ');
	i = -1;
	while (temp1[++i])
	{
		if (ft_atoi(temp1[i]) == 0 && temp1[i][0] != '0')
			exit(write(2, "Error\n", 6));
		stack->stack_a[i] = ft_atoi(temp1[i]);
		free(temp1[i]);
	}
	stack->size_a = i;
	stack->size_c = stack-size_a;
	stack->stack_a = (int *) malloc (stack->size_a * sizeof(int));
	free (temp1);
	free (temp);
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	if (argc < 2)
		exit(ft_printf("%s <missing list of integers>\n", argv[0]));
	ft_size_count(argc, argv, &stack);
	check_dups(&stack);
	if (ordered(&stack))
		return(0);
	ft_arr_sort(&stack);
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack->num);
}
