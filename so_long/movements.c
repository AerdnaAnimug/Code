/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:39 by agumina           #+#    #+#             */
/*   Updated: 2023/03/14 14:50:45 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_hook(int key, t_game *game)
{
	if (key == 53)
	{
		free_map(game->map);
		mlx_destroy_window(game->mlx, game->mlx_win);
		exit(0);
	}
	return (0);
}
