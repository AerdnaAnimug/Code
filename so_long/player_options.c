/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_options.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:33:47 by agumina           #+#    #+#             */
/*   Updated: 2023/04/07 18:22:20 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	locate_player(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j] != '\n')
		{
			if (game->map[i][j] == 'P')
			{
				game->player.y = i;
				game->player.x = j;
			}
			j++;
		}
		i++;
	}
}

void	locate_gems(t_game *game)
{
	int	i;
	int	j;
	int	counter;

	counter = 0;
	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j] != '\n')
		{
			if (game->map[i][j] == 'C')
			{
				counter++;
			}
			j++;
		}
		i++;
	}
	game->player.collectibles = counter;
}

void	gems_images_init(t_game *game)
{
	game->imgs.item1 = mlx_xpm_file_to_image(game->mlx,
			"image/item1.xpm", &game->imgs.width, &game->imgs.height);
	game->imgs.item2 = mlx_xpm_file_to_image(game->mlx,
			"image/item2.xpm", &game->imgs.width, &game->imgs.height);
	game->imgs.item3 = mlx_xpm_file_to_image(game->mlx,
			"image/item3.xpm", &game->imgs.width, &game->imgs.height);
}

void	animation(t_game *game, char c)
{
	if (c == 'C')
	{
		mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.floor,
			game->imgs.offset_x, game->imgs.offset_y);
		if (game->frame >= 0 && game->frame < 12)
			mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.item1,
				game->imgs.offset_x + 11, game->imgs.offset_y + 11);
		else if (game->frame >= 12 && game->frame < 24)
			mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.item2,
				game->imgs.offset_x + 11, game->imgs.offset_y + 11);
		else if (game->frame >= 24 && game->frame < 36)
			mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.item3,
				game->imgs.offset_x + 11, game->imgs.offset_y + 11);
		else if (game->frame >= 36 && game->frame < 48)
			mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.item2,
				game->imgs.offset_x + 11, game->imgs.offset_y + 11);
		else if (game->frame >= 48 && game->frame < 60)
			mlx_put_image_to_window(game->mlx, game->mlx_win, game->imgs.item1,
				game->imgs.offset_x + 11, game->imgs.offset_y + 11);
	}
}

void	animate_gems(t_game *game)
{
	int		i;
	size_t	j;

	i = -1;
	game->imgs.offset_x = 0;
	game->imgs.offset_y = 0;
	while (++i < get_y(game->map))
	{
		j = -1;
		while (++j < ft_strlen(game->map[0]))
		{
			animation(game, game->map[i][j]);
			game->imgs.offset_x += 64;
		}
		game->imgs.offset_x = 0;
		game->imgs.offset_y += 64;
	}
}
