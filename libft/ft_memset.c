/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:06:43 by agumina           #+#    #+#             */
/*   Updated: 2023/01/24 12:45:11 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)

{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(str + i) = (unsigned char)(c);
		i++;
	}
	return (str);
}
