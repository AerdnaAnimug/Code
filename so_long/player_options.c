/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_options.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:33:47 by agumina           #+#    #+#             */
/*   Updated: 2023/03/16 17:34:28 by agumina          ###   ########.fr       */
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

void	collect_eggs(t_game *game)
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
