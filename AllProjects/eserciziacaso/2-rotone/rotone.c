/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:24:59 by agumina           #+#    #+#             */
/*   Updated: 2022/09/22 18:53:01 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y')
			str[i] += 1;
		else if (str[i] == 'z' || str[i] == 'Z')
			str[i] -= 25;

	}
}

int main(int	ac, char	**av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, '\n', 1);
}
