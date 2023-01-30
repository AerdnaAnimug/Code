/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:46:18 by agumina           #+#    #+#             */
/*   Updated: 2023/01/26 14:27:16 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*pos;

	pos = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			pos = s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	else
		return ((char *)pos);
}
