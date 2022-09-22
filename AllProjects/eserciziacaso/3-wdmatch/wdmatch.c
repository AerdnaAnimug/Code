/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalconi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:38:58 by aguminamerda           #+#    #+#             */
/*   Updated: 2022/09/22 20:13:14 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *str, char *gumina)
{
	int i;
	int j;
	int contgumina;

	i = 0;
	j = 0;
	contgumina = 0; 
	while (str[i] != '\0')
	{
		while (gumina[j] != '\0')
		{
			if (gumina[j] == str[i])
			{
				contgumina ++;
				break ;
			}
			j ++;
		}
		i ++;
	}
	j = 0;
	while (str[j] != '\0' && contgumina == i)
	{
		write(1, &str[j], 1);
		j ++;
	}
}


int main (int ac, char **av)
{
	if (ac == 3)
	{
		wdmatch(av[1], av[2]);
	}
	write(1, "\n", 1);
	return(0);
}
