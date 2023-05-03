/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:56:57 by agumina           #+#    #+#             */
/*   Updated: 2023/05/03 15:57:28 by agumina          ###   ########.fr       */
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
		game->imgs.enemy, (game->player.x) * 64, ((game->player.y) * 64));
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
