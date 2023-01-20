/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:37:59 by agumina           #+#    #+#             */
/*   Updated: 2023/01/20 12:51:06 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*string;

	string = (char *)s;
	while (*string)
	{
		if (*string == (char)c)
			return (string);
		string++;
	}
	if (*string == (char)c)
		return (string);
	return (NULL);
}
