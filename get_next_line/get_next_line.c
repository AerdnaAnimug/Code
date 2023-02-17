/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:40:22 by agumina           #+#    #+#             */
/*   Updated: 2023/02/17 17:02:14 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *save)
{
	int	r;
	char	*buff;

	r = 1;
	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	while
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*save;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	save = ft_read(fd, save);
	if (!save)
		return (NULL);
	line = 0; //ft_row(save)
	save = 0; //ft_remove(save);
	return (line);
}
