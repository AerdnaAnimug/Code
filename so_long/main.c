/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:24:14 by agumina           #+#    #+#             */
/*   Updated: 2023/03/14 16:08:20 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	destroy(t_game *game)
{
	free_map(game->map);
	exit(0);
}

int	main(int ac, char **av)
{
	t_game	game;

	(void)av;
	if (ac != 2)
		return (0);
	game.mlx = mlx_init();
	game.map = map_maker(av[1]);
	game.mlx_win = mlx_new_window(game.mlx, ft_strlen(game.map[0]) * 64,
			get_y(game.map) * 64, "so_long");
	mlx_key_hook(game.mlx_win, key_hook, &game);
	mlx_hook(game.mlx_win, 17, 0, destroy, (void *)&game);
	img_init(&game);
	//draw_map(&game);
	mlx_loop(game.mlx);
}
