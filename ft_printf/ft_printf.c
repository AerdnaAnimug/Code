/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:48:44 by agumina           #+#    #+#             */
/*   Updated: 2023/02/06 18:05:03 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convers(char c, int *count, va_list args)
{
	if (c == 'c')
	{
		ft_putchar(va_arg(args, int));
		*count += 1;
	}
	else if (c == 's')
		*count += ft_putstr(args);
	else if (c == 'p')
		*count += ft_putptr(args);
	else if (c == 'd' || c == 'i')
		*count += ft_putint(args);
	else if (c == 'u')
		*count += ft_putuns(args);
	else if (c == 'x' || c == 'X')
		*count += ft_puthex(args);
	if (c == '%')
	{
		ft_putchar('%');
		*count += 1;
	}
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_convers(format[i], count, args);
		}
		else
		{
			write(1, format[i], 1);
			i++;
		}
	}
	va_end(args);
	return (i);
}
