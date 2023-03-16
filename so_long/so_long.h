/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:06:26 by agumina           #+#    #+#             */
/*   Updated: 2023/03/16 17:13:54 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include <fcntl.h>
# include "structs.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1

int		main(int ac, char **av);
char	**map_maker(char *path);
int		get_y(char **matrix);
void	free_map(char **matrix);
int		key_hook(int key, t_game *game);
void	draw_map(t_game *game);
char	*get_next_line(int fd);
char	*ft_read(int fd, char *save);
char	*ft_row(char *save);
char	*ft_remove(char *save);
size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);

# endif
#endif