/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:24:14 by agumina           #+#    #+#             */
/*   Updated: 2023/03/14 13:22:36 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_game	game;

	(void)av;
	if (ac != 2)
		return (0);
	game.mlx = mlx_init();
	game.map = map_maker(av[1]);
game.mlx_win = mlx_new_window(game.mlx, ft_strlen(game.map[0]) * 64, 1080, "so_long");
	mlx_loop(game.mlx);
}
