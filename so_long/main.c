/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:24:14 by agumina           #+#    #+#             */
/*   Updated: 2023/03/07 16:12:31 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_game	game;
	t_data	img;

	game.mlx = mlx_init();
	game.map = map_maker(av[1]);
	mlx_loop(game.mlx);
}
