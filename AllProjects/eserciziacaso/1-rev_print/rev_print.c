/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:27:55 by agumina           #+#    #+#             */
/*   Updated: 2022/09/22 18:14:49 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int size(char	*str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_rev_print (char *str)
{
	int		len;

	len = size(str);
	while (0 <= len)
	{
		write(1, &str[len - 1], 1);
		len--;
	}
	write(1, "\n", 1);
	return (str);
}
