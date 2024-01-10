/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:58:08 by agumina           #+#    #+#             */
/*   Updated: 2024/01/10 18:29:49 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dups(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a)
	{
		j = i + 1;
		while (j < stack->size_a)
		{
			if (stack->stack_a[i] == stack->stack_a[j])
			{
				exit(write(2, "Error\n", 6));
			}
			j++;
		}
		i++;
	}
}

void	check_arg(int argc, char **argv)
{
	int	i;

	if (argc <= 1)
		exit(1);
	i = 0;
	while (argv[++i])
	{
		if (ft_atoi(argv[i]) < -2147483648
			|| ft_atoi(argv[i]) > 2147483647)
			exit(write(2, "Error\n", 6));
	}
}

void	init_a(t_stack *stack, char **temp1)
{
	int	i;

	i = -1;
	while (temp1[++i])
	{
		if (ft_atoi(temp1[i]) == 0 && temp1[i][0] != '0')
			exit(write(2, "Error\n", 6));
		stack->stack_a[i] = ft_atoi(temp1[i]);
		free(temp1[i]);
	}
	stack->size_a = i;
	stack->size_c = stack->size_a;
	stack->stack_a = (int *) malloc (stack->size_a * sizeof(int));
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
	init_a(stack, &temp);
	free (temp1);
	free (temp);
}

int	main(int argc, char **argv)
{
	t_stack	stack;

	check_arg(argc, argv);
	ft_size_count(argc, argv, &stack);
	check_dups(&stack);
	if (ft_is_ordered(&stack))
		return (0);
	ft_num_stack(&stack);
	ft_bubb_sort(&stack);
	ft_empty_stack_a(&stack);
	init_b(&stack);
	push_all_b(&stack);
	ft_free(&stack);
	return (0);
}
