/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:20:13 by agumina           #+#    #+#             */
/*   Updated: 2022/09/11 20:42:05 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	check(int *ar, int n)
{
	int	i;
	int	flag;

	flag = 0;
	i = 0;
	while (i < n - 1 && flag == 0)
	{
		if (ar[i] >= ar[i + 1])
			flag = 1;
		i++;
	}
	if (flag == 0)
	{
		i = 0;
		while (i < n)
		{
			putchar(ar[i] + '0');
			i++;
		}
		if (ar[0] != 10 - n)
			write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int	ar[9];
	int	i;

	i = 0;
	while (i < n)
	{
		ar[i] = i;
		i++;
	}
	while (ar[0] <= 10 - n)
	{
		check(ar, n);
		ar[n - 1]++;
		i = n - 1;
		while (i > 0)
		{
			if (ar[i] > 10 - n + i)
			{
				ar[i] = ++ar[i - 1];
			}
			i--;
		}
	}
}
