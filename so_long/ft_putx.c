/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:11:45 by agumina           #+#    #+#             */
/*   Updated: 2023/03/23 16:40:40 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	putxaux(size_t nbr, char *base)
{
	int		i;

	i = 0;
	if (nbr >= 16)
	{
		i += putxaux(nbr / 16, base);
		putxaux(nbr % 16, base);
	}
	else
	{
		ft_putchar(base[nbr]);
	}
	return (i + 1);
}

int	ft_putx(size_t nbr)
{
	return (putxaux(nbr, "0123456789abcdef"));
}
