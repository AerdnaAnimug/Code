/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:07:36 by agumina           #+#    #+#             */
/*   Updated: 2023/01/20 16:28:44 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;
	size_t	dlen;
	size_t	slen;

	i = 0;
	n = 0;
	while (dst[n] && n < dstsize)
	{
		n++;
	}
	dlen = n;
	slen = ft_strlen(src);
	while (src[i] && i < dstsize - dlen - 1)
	{
		dst[n] = src[i];
		i++;
		n++;
	}
	if (i < dstsize)
		dst[n] = '\0';
	return (dlen + slen);
}
