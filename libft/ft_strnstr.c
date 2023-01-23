/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:31:57 by agumina           #+#    #+#             */
/*   Updated: 2023/01/20 17:00:36 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

strnstr	(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (big[i] && i < len)
	{
		while ((big[i + n] == little[n]) && little[n] && ((i + n) < len))
		{
			if (!little[n])
				return ((char *)&big[i]);
				n++;
		}
		n = 0;
		i++;
	}
	if (!little[0])
		return ((char *)&big[i])
	return (NULL);
}
