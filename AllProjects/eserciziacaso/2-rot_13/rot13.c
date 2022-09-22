/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:59:10 by agumina           #+#    #+#             */
/*   Updated: 2022/09/22 18:59:06 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rot13(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			str[i] += 13;
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			str[i] -= 13;
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rot13(av[1]);
	write(1, '\n', 1);
	return (0);
}
