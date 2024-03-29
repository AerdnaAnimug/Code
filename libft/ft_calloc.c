/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:29:35 by agumina           #+#    #+#             */
/*   Updated: 2023/01/24 16:40:52 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (0);
	mem = malloc(count * size);
	if (!mem)
		return (0);
	ft_memset(mem, 0, count * size);
	return (mem);
}
