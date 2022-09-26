/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsherpa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:09:32 by nsherpa           #+#    #+#             */
/*   Updated: 2022/09/26 15:57:57 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_numeric(char *str);
void	ft_putstr(char *str);

void	ft_second_if(int nbr, int i, int start)
{
	int		tens;

	tens = nbr / 10;
	if (tens >= 2)
	{
		if (!start)
			write(1, " ", 1);
		ft_putstr(b[tens - 2]);
		nbr = nbr - tens * 10;
		start = 0;
	}
	if (tens == 1)
	{
		ones = nbr - 10;
		if (!start)
			write(1, " ", 1);
		ft_putstr(a[9 + ones]);
		nbr = 0;
		start = 0;
	}
}

void	ft_first_if(int nbr, int start, int hundreds, char *a)
{
	if (hundreds > 0)
	{
		if (!start)
			write(1, " ", 1);
		ft_putstr(a[hundreds - 1]);
		nbr = nbr - hundreds * 100;
		write (1, " hundred", 8);
		start = 0;
	}
	if (nbr > 0)
	{
		if (!start)
			write(1, " ", 1);
		ft_putstr(a[nbr - 1]);
	}
}

void	write_three(int nbr, int i, int start)
{
	char	a[19][10];
	char	b[8][8];
	char	c[4][9];
	int		ones;
	int		hundreds;

	a[19][10] = {"one", "two", "three", "four", "five", "six", "seven",
		"eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen",
		"fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	b[8][8] = {"twenty", "thirty", "fourty", "fifty", "sixty",
		"seventy", "eighty", "ninety"};
	c[4][9] = {"thousand", "million", "billion"};
	hundreds = nbr / 100;
	ft_first_if(nbr, start, hundreds, a);
	if (i > 0)
	{
		write(1, " ", 1);
		ft_putstr(c[i - 1]);
	}
	ft_second_if(nbr, i, start);
}

void	ft_pnw_else(int nbr, int i, int start)
{
	if (i <= 0)
		write_three(nbr, i, start);
}

void	print_number_words(int nbr)
{
	int	numbers[3];
	int	i;
	int	three;
	int	start;

	numbers[0] = 1000;
	numbers[1] = 1000000;
	numbers[2] = 1000000000;
	i = -1;
	start = 1;
	while (nbr > numbers[++i])
		;
	while (i >= 0)
	{
		if (i > 0)
		{
			three = nbr / numbers[i - 1];
			write_three(three, i, start);
			nbr = nbr - (nbr / numbers[i - 1]) * numbers[i - 1];
		}
		ft_pnw_else(nbr, i, start);
		i --;
		start = 0;
	}
}
