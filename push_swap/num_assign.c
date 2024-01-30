/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_assign.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:47:22 by agumina           #+#    #+#             */
/*   Updated: 2024/01/30 10:23:14 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_num_set(t_set *set)
{
	int	i;

	i = 0;
	set->num = (int *) malloc(set->size_a * sizeof(int));
	while (i < set->size_a)
	{
		set->num[i] = set->set_a[i];
		i++;
	}
}

void	ft_arr_sort(t_set *set)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (j < set->size_a - 1)
	{
		i = 0;
		while (i < set->size_a - 1)
		{
			if (set->num[i] > set->num[i + 1])
			{
				tmp = set->num[i];
				set->num[i] = set->num[i + 1];
				set->num[i + 1] = tmp;
			}
			i++;
		}
		j++;
	}
}

void	ft_empty_set_a(t_set *set)
{
	int	i;
	int	j;

	j = 0;
	while (j < set->size_a)
	{
		i = 0;
		while (i < set->size_a)
		{
			if (set->set_a[j] == set->num[i])
			{
				set->set_a[j] = i + 1;
				break ;
			}
			i++;
		}
		j++;
	}
}
