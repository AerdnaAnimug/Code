/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:11:55 by agumina           #+#    #+#             */
/*   Updated: 2023/03/23 15:48:47 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	putptraux(unsigned long nbr, char *base)
{
	int	i;

	i = 0;
	if (nbr >= 16)
	{
		i += putptraux(nbr / 16, "0123456789abcdef");
		putptraux(nbr % 16, "0123456789abcdef");
	}
	else
	{
		ft_putchar(base[nbr]);
	}
	return (i + 1);
}

int	ft_putptr( unsigned long nbr)
{
	if (nbr == 0)
		return (write(1, "0x0", 3));
	write(1, "0x", 2);
	return (2 + putptraux (nbr, "0123456789abcdef"));
}
