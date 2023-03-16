/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:28:10 by agumina           #+#    #+#             */
/*   Updated: 2023/03/16 17:40:21 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	img_init(t_game *game)
{
	game->imgs.floor = mlx_xpm_file_to_image(game->mlx,
			"image/floor.xpm", &game->imgs.width, &game->imgs.height);
	game->imgs.wall = mlx_xpm_file_to_image(game->mlx,
			"image/wall.xpm", &game->imgs.width, &game->imgs.height);
	game->imgs.item = mlx_xpm_file_to_image(game->mlx,
			"image", &game->imgs.width, &game->imgs.height);
	game->imgs.open_door = mlx_xpm_file_to_image(game->mlx,
			"image", &game->imgs.width, &game->imgs.height);
	game->imgs.c_door = mlx_xpm_file_to_image(game->mlx,
			"image", &game->imgs.width, &game->imgs.height);
	game->imgs.player = mlx_xpm_file_to_image(game->mlx,
			"image", &game->imgs.width, &game->imgs.height);
	game->imgs.patrol = mlx_xpm_file_to_image(game->mlx,
			"image", &game->imgs.width, &game->imgs.height);
	game->imgs.e3 = mlx_xpm_file_to_image(game->mlx,
			"image/", &game->imgs.width, &game->imgs.height);
}

void	rules_2(t_game *game, char c)
{
	if (c == 'P')
	{
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.floor,
			game->imgs.offset_x, game->imgs.offset_y);
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.player,
			game->imgs.offset_x, game->imgs.offset_y);
	}
	else if (c == 'G')
	{
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.floor,
			game->imgs.offset_x, game->imgs.offset_y);
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->enemy.c1,
			game->imgs.offset_x, game->imgs.offset_y);
	}
}

void	rules(t_game *game, char c)
{
	if (c == '1')
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.wall,
			game->imgs.offset_x, game->imgs.offset_y);
	else if (c == '0')
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.floor,
			game->imgs.offset_x, game->imgs.offset_y);
	else if (c == 'E')
	{
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.floor,
			game->imgs.offset_x, game->imgs.offset_y);
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.c_door,
			game->imgs.offset_x, game->imgs.offset_y);
	}
	else if (c == 'C')
	{
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.floor,
			game->imgs.offset_x, game->imgs.offset_y);
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.item,
			game->imgs.offset_x, game->imgs.offset_y);
	}
	else
		rules_2(game, c);
}

void	draw_map(t_game *game)
{
	int		i;
	size_t	j;

	i = -1;
	game->imgs.offset_x = 0;
	game->imgs.offset_y = 0;
	while (++i < get_y(game->map))
	{
		j = -1;
		while (j++ < ft_strlen(game->map[0]))
		{
			rules(game, game->map[i][j]);
			game->imgs.offset_x += 64;
		}
		game->imgs.offset_x = 0;
		game->imgs.offset_y += 64;
	}
}
