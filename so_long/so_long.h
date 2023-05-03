/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:06:26 by agumina           #+#    #+#             */
/*   Updated: 2023/05/03 15:56:04 by agumina          ###   ########.fr       */
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
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1

int		is_valid_map(char **map);
void	draw_map(t_game *game);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_itoa(long n);
int		ft_printf(const char *format, ...);
void	ft_putchar(char c);
int		ft_puthex(size_t nbr);
int		ft_putint(int nb);
int		ft_putptr( unsigned long nbr);
int		ft_putstr(char *str);
int		ft_putuns(unsigned int nb);
int		ft_putx(size_t nbr);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*get_next_line(int fd);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
int		main(int ac, char **av);
char	**map_maker(char *path);
int		get_y(char **matrix);
void	free_map(char **matrix);
int		key_hook(int key, t_game *game);
void	locate_gems(t_game *game);
void	gems_images_init(t_game *game);
void	animate_gems(t_game *game);
void	img_init(t_game *game);
char	*ft_read(int fd, char *save);
char	*ft_row(char *save);
char	*ft_remove(char *save);
void	locate_player(t_game *game);
void	print_moves(t_game *game);
void	draw_exit(t_game *game);
void	game_over(t_game *game);
void	win_game(t_game *game);
int		locate_door(t_game *game);

# endif
#endif