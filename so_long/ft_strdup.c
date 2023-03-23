/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:32:42 by agumina           #+#    #+#             */
/*   Updated: 2023/03/23 15:43:59 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, (char *)s1, ft_strlen(s1) + 1);
	return (ptr);
}
