/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:37:01 by agumina           #+#    #+#             */
/*   Updated: 2023/03/23 18:45:58 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_hook(int key, t_game *game)
{
	/*locate_player(game);
	if (key == 2 || key == 124)
		move_player_right(game, game->player.x, game->player.y);
	else if (key == 13 || key == 126)
		move_player_up(game, game->player.x, game->player.y);
	else if (key == 0 || key == 123)
		move_player_left(game, game->player.x, game->player.y);
	else if (key == 1 || key == 125)
		move_player_down(game, game->player.x, game->player.y);*/
	if (key == 53)
	{
		free_map(game->map);
		mlx_destroy_window(game->mlx, game->mlx_win);
		exit(0);
	}
	if (game->player.collectibles == 0)
		draw_exit(game);
	print_moves(game);
	return (0);
}
