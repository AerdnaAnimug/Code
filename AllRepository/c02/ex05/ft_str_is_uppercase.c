/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:57:19 by agumina           #+#    #+#             */
/*   Updated: 2022/09/15 15:53:19 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
