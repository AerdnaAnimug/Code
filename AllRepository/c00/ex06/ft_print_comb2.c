/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:29:07 by agumina           #+#    #+#             */
/*   Updated: 2022/09/12 18:14:56 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	c1;
	char	c2;

	c1 = 0;
	c2 = 0;
	while (c1 <= 99)
	{
		c2 = c1 + 1;
		while (c2 <= 99)
		{
			ft_putchar(c1 / 10 + '0');
			ft_putchar(c1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(c2 / 10 + '0');
			ft_putchar(c2 % 10 + '0');
			c2++;
			if (c1 != 98)
				write(1, ", ", 2);
		}
		c1++;
	}
}
