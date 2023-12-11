/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:31:57 by agumina           #+#    #+#             */
/*   Updated: 2023/02/01 10:42:45 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!haystack && !len)
		return (0);
	while (haystack[i] && (i < len))
	{
		while ((haystack[i + j] == needle[j]) && needle[j] && ((i + j) < len))
			j += 1;
		if (!needle[j])
			return ((char *)&haystack[i]);
		j = 0;
		i += 1;
	}
	if (!needle[0])
		return ((char *)&haystack[i]);
	return (NULL);
}
