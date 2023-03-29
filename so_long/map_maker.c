/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_maker.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:08:05 by agumina           #+#    #+#             */
/*   Updated: 2023/03/29 14:26:00 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_map(char **matrix)
{
	int	i;

	i = -1;
	while (matrix[++i])
		free(matrix[i]);
	free(matrix);
}

int	get_y(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
		i++;
	return (i);
}

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

int	file_linecount(char *file)
{
	char	*l;
	int		fd;
	int		i;
	int		j;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		exit(write(1, "Error\nMap not found\n", 20));
	j = 0;
	l = get_next_line(fd);
	if (!l)
		null_error("Mappa vuota");
	i = ft_strlen(l) - 1;
	while (l)
	{
		if (l[ft_strlen(l) - 1] == '\n')
			l[ft_strlen(l) - 1] = 0;
		free(l);
		l = get_next_line(fd);
		j++;
	}
	close(fd);
	return (j);
}

char	**map_maker(char *path)
{
	char	**map;
	int		fd;
	int		i;
	int		line;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		null_error("Errore nell'apertura del file");
	line = file_linecount(path);
	if (line == 0)
		return (0);
	map = (char **)malloc(sizeof(char *) * (line + 1));
	if (!map)
		null_error_freemap("Errore nell'allocazione di memoria", fd, map);
	i = -1;
	while (++i < line)
		map[i] = get_next_line(fd);
	map[line] = 0;
	i = -1;
	if (!is_valid_map(map))
		null_error_freemap("Mappa non valida", fd, map);
	close(fd);
	return (map);
}
