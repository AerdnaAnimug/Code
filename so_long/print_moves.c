/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:24:11 by agumina           #+#    #+#             */
/*   Updated: 2023/03/28 16:03:55 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_exit(t_game *game)
{
	locate_door(game);
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.floor,
		game->imgs.offset_x, game->imgs.offset_y);
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.open_door,
		(game->door_x) * 64, ((game->door_y) * 64));
	game->done = 1;
}

void	win_game(t_game *game)
{
	game->player.moves++;
	free_map(game->map);
	mlx_destroy_window(game->mlx, game->mlx_win);
	ft_printf("Daje fenomeno :D Mosse compiute: %d\n", game->player.moves);
	exit(0);
}

void	game_over(t_game *game)
{
	mlx_put_image_to_window(game->mlx, game->mlx_win,
		game->imgs.e3, (game->player.x) * 61, ((game->player.y) * 61) + 30);
	free_map(game->map);
	mlx_destroy_window(game->mlx, game->mlx_win);
	ft_printf("Peccato, riprova! Mosse compiute: %d\n", game->player.moves);
	sleep(4);
	exit(0);
}

int	locate_door(t_game *game)
{
	int		i;
	size_t	j;

	i = 0;
	while (i < get_y(game->map))
	{
		j = 0;
		while (j < ft_strlen(game->map[0]))
		{
			if (game->map[i][j] == 'E')
			{
				game->door_y = i;
				game->door_x = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	print_moves(t_game *game)
{
	char	*str;
	char	*temp;

	temp = ft_itoa(game->player.moves);
	str = ft_strjoin("Mosse: ", temp);
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.wall, 0, 0);
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.wall, 64, 0);
	mlx_string_put(game->mlx, game->mlx_win, 20, 10, 0xFFFFFF, str);
	free(str);
	free(temp);
}
