/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:11:58 by agumina           #+#    #+#             */
/*   Updated: 2023/02/08 15:30:43 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	puthexaux(size_t nbr, char *base)
{
	int		i;

	i = 0;
	if (nbr >= 16)
	{
		i += puthexaux(nbr / 16, base);
		puthexaux(nbr % 16, base);
	}
	else
	{
		ft_putchar(base[nbr]);
	}
	return (i + 1);
}

int	ft_puthex(size_t nbr)
{
	return (puthexaux(nbr, "0123456789ABCDEF"));
}
