/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:58:08 by agumina           #+#    #+#             */
/*   Updated: 2024/01/30 10:33:09 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dups(t_set *set)
{
	int	i;
	int	j;

	i = 0;
	while (i < set->size_a)
	{
		j = i + 1;
		while (j < set->size_a)
		{
			if (set->set_a[i] == set->set_a[j])
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

void	init_a(t_set *set, char **tmp1)
{
	int	i;

	i = -1;
	while (tmp1[++i])
	{
		if (ft_atoi(tmp1[i]) == 0 && tmp1[i][0] != '0')
			exit(write(2, "Error\n", 6));
		set->set_a[i] = ft_atoi(tmp1[i]);
	}
}

void	ft_size_count(int argc, char **argv, t_set *set)
{
	int		i;
	char	*tmp;
	char	**tmp1;

	tmp = (char *) malloc (sizeof(char));
	if (tmp == NULL)
		exit(write(2, "Merror\n", 7));
	tmp[0] = 0;
	i = 0;
	while (++i < argc)
	{
		tmp = ft_strjoin(tmp, argv[i]);
		tmp = ft_strjoin(tmp, " ");
	}
	tmp1 = ft_split(tmp, ' ');
	i = -1;
	free(tmp);
	while (tmp1[++i])
		;
	set->size_a = i;
	set->size_b = 0;
	set->size_l = set->size_a;
	set->set_a = (int *) malloc (set->size_a * sizeof(int));
	if (set->set_a == NULL)
		exit(write(2, "Merror\n", 7));
	init_a(set, tmp1);
	i = -1;
	while (tmp1[++i])
		free(tmp1[i]);
	free(tmp1);
}

int	main(int argc, char **argv)
{
	t_set	set;

	check_arg(argc, argv);
	ft_size_count(argc, argv, &set);
	check_dups(&set);
	if (ft_is_ordered(&set))
		return (0);
	ft_num_set(&set);
	ft_arr_sort(&set);
	ft_empty_set_a(&set);
	init_b(&set);
	push_all_b(&set);
	ft_free(&set);
	return (0);
}
