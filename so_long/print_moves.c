/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:24:11 by agumina           #+#    #+#             */
/*   Updated: 2023/05/03 15:57:22 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void	draw_rect(int x, int y, t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			my_mlx_pixel_put(&game->img, j, i, 0x00000000);
			j++;
		}
		i++;
	}
	mlx_put_image_to_window(game->mlx, game->mlx_win, game->img.img, 0, 0);
}

void	test(t_game *game)
{
	game->img.img = mlx_new_image(game->mlx, 400, 30);
	game->img.addr = mlx_get_data_addr(game->img.img, &game->img.bits_per_pixel,
			&game->img.line_length, &game->img.endian);
	draw_rect(400, 30, game);
}

int	create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

void	print_moves(t_game *game)
{
	char	*str;
	char	*temp;

	test(game);
	temp = ft_itoa(game->player.moves);
	str = ft_strjoin(ft_strdup("mosse: "), temp);
	mlx_string_put(game->mlx, game->mlx_win, 20, 10,
		create_trgb(255, 255, 255, 255), str);
	free(temp);
	free(str);
}
