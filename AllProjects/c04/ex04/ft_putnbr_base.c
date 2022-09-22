/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:51:30 by afalconi          #+#    #+#             */
/*   Updated: 2022/09/22 11:23:19 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	

int	ft_strlen(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		while (str[i + j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
		j = 1;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;

	len = 0;
	//if (base == '\0' || )
		return (0);
	len = ft_strlen(base);
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(2, base);
		ft_putnbr_base(147483648, base);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		ft_putnbr_base(nbr, base);
	}
	else if (nbr > len -1)
	{
		ft_putnbr_base(nbr / len, base);
		ft_putnbr_base(nbr % len, base);
	}
	else
		ft_putchar(base[nbr]);
}

int	main(void)
{
	ft_putnbr_base(42, "ABAAAAAA");
	return (0);
}
