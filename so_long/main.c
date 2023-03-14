/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:24:14 by agumina           #+#    #+#             */
/*   Updated: 2023/03/09 17:09:21 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_game	game;

	if (ac != 2)
		return (0);
	game.mlx = mlx_init();
	game.map = map_maker(av[1]);
	game.mlx_win = mlx_new_window(game.mlx, 1920, 1080, "ciaus");
	mlx_loop(game.mlx);
}
