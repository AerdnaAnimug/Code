/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:54:42 by agumina           #+#    #+#             */
/*   Updated: 2024/01/08 12:28:55 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	temp1 = ft_split(temp, " ");
	i = -1;
	while (temp1[++i])
	{
		stack->stack_a = ft_atoi(temp1[i]);
		free(temp1[i]);
		
	}
	free (temp1);
	free (temp);
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	if (argc != 1)
		exit(ft_printf("%s <list of integers>\n", argv[0]));
	ft_size_count(argc, argv, &stack);
}
