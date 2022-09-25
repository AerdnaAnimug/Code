/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:21:05 by agumina           #+#    #+#             */
/*   Updated: 2022/09/25 18:11:22 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	fd_len_dict(char *path)
{
	int		fd;
	int		len;
	int		r;
	char	buf[1];

	r = 1;
	len = 0;
	fd = open(*path, O_RDONLY);
	while (r)
	{
		r = read(fd, buf, 10);
		len += r;
	}
	return (len);
}

int main()
{
	char	*str;

	str = malloc((len + 1)*sizeof(char));
	read(
}
