/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:37:01 by agumina           #+#    #+#             */
/*   Updated: 2023/11/15 12:39:05 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_player_up(t_game *game, int x, int y)
{
	if (game->map[y - 1][x] != '1')
	{
		if (game->map[y - 1][x] == 'C')
			game->player.collectibles--;
		else if (game->map[y - 1][x] == 'E' && game->done == 0)
			return ;
		else if (game->map[y - 1][x] == 'E' && game->done)
			win_game(game);
		else if (game->map[y - 1][x] == 'G')
			game_over(game);
		if (game->imgs.player == game->player.top)
			game->imgs.player = game->player.top2;
		else
			game->imgs.player = game->player.top;
		game->player.moves++;
		game->map[y][x] = '0';
		game->map[y - 1][x] = 'P';
		ft_printf("moving up: %d\n", game->player.moves);
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.floor,
			(x) * 64, ((y) * 64));
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.player,
			(x) * 64, ((y - 1) * 64));
	}
}

void	move_player_down(t_game *game, int x, int y)
{
	if (game->map[y + 1][x] != '1')
	{
		if (game->map[y + 1][x] == 'C')
			game->player.collectibles--;
		else if (game->map[y + 1][x] == 'E' && game->done == 0)
			return ;
		else if (game->map[y + 1][x] == 'E' && game->done)
			win_game(game);
		else if (game->map[y + 1][x] == 'G' )
			game_over(game);
		if (game->imgs.player == game->player.bottom)
			game->imgs.player = game->player.bottom2;
		else
			game->imgs.player = game->player.bottom;
		game->player.moves++;
		game->map[y][x] = '0';
		game->map[y + 1][x] = 'P';
		ft_printf("moving down: %d\n", game->player.moves);
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.floor,
			(x) * 64, ((y) * 64));
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.player,
			(x) * 64, ((y + 1) * 64));
	}
}

void	move_player_left(t_game *game, int x, int y)
{
	if (game->map[y][x - 1] != '1')
	{
		if (game->map[y][x - 1] == 'C')
			game->player.collectibles--;
		else if (game->map[y][x - 1] == 'E' && game->done == 0)
			return ;
		else if (game->map[y][x - 1] == 'E' && game->done)
			win_game(game);
		else if (game->map[y][x - 1] == 'G')
			game_over(game);
		if (game->imgs.player == game->player.left)
			game->imgs.player = game->player.left2;
		else
			game->imgs.player = game->player.left;
		game->player.moves++;
		game->map[y][x] = '0';
		game->map[y][x - 1] = 'P';
		ft_printf("moving left: %d\n", game->player.moves);
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.floor,
			(x) * 64, ((y) * 64));
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.player,
			(x - 1) * 64, ((y) * 64));
	}
}

void	move_player_right(t_game *game, int x, int y)
{
	if (game->map[y][x + 1] != '1')
	{
		if (game->map[y][x + 1] == 'C')
			game->player.collectibles--;
		else if (game->map[y][x + 1] == 'E' && game->done == 0)
			return ;
		else if (game->map[y][x + 1] == 'E' && game->done)
			win_game(game);
		else if (game->map[y][x + 1] == 'G')
			game_over(game);
		if (game->imgs.player == game->player.right)
			game->imgs.player = game->player.right2;
		else
			game->imgs.player = game->player.right;
		game->player.moves++;
		game->map[y][x] = '0';
		game->map[y][x + 1] = 'P';
		ft_printf("moving right: %d\n", game->player.moves);
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.floor,
			(x) * 64, ((y) * 64));
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.player,
			(x + 1) * 64, ((y) * 64));
	}
}

int	key_hook(int key, t_game *game)
{
	locate_player(game);
	if (key == 2 || key == 124)
		move_player_right(game, game->player.x, game->player.y);
	else if (key == 13 || key == 126)
		move_player_up(game, game->player.x, game->player.y);
	else if (key == 0 || key == 123)
		move_player_left(game, game->player.x, game->player.y);
	else if (key == 1 || key == 125)
		move_player_down(game, game->player.x, game->player.y);
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
