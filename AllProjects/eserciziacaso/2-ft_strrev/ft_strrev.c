/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:46:32 by agumina           #+#    #+#             */
/*   Updated: 2022/09/22 19:35:25 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	size(char *str)
{
	int		i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char    *ft_strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = size(str)
	while (i < len /  2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
	return (str);
}
