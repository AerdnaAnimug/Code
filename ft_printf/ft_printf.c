/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:48:44 by agumina           #+#    #+#             */
/*   Updated: 2023/02/01 17:40:01 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_convers(const char type, va_list curr_arg)
{
	if (type == 'c')
	else if (type == 's')
	else if (type == 'p')
	else if (type == 'd')
	else if (type == 'i')
	else if (type == 'u')
	else if (type == 'x' || type == 'X')
	else if (type == '%')
		ft_putchar('%');
	return (1);
}
int ft_printf(const char *format, ...)
{
	va_list args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while(format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_convers(format[i], args)
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