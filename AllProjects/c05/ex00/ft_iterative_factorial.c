/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:23:42 by agumina           #+#    #+#             */
/*   Updated: 2022/09/26 14:30:50 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb != 0)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
