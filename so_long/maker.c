/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maker.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:08:05 by agumina           #+#    #+#             */
/*   Updated: 2023/03/09 17:06:31 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	counter(char *path)
{
	char	*str;
	int		i;
	int		fd;

	fd = open(path, O_RDONLY);
	i = 0;
	str = get_next_line(fd);
	while (str)
	{
		free(str);
		str = get_next_line(fd);
		i++;
	}
	free(str);
	close(fd);
	return (i);
}

char	**map_maker(char *path)
{
	int		fd;
	int		i;
	int		line;
	char	**matrix;

	i = -1;
	line = counter(path);
	fd = open(path, O_RDONLY);
	if (fd <= 0)
		exit(0);
	matrix = (char **) malloc((line + 1) * sizeof(char *));
	while (++i < line)
		matrix[i] = get_next_line(fd);
	matrix[line] = 0;
}
