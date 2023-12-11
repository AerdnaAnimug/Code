/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:10:07 by agumina           #+#    #+#             */
/*   Updated: 2023/01/24 16:58:09 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < len)
	{
		if (str[i] == (char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
