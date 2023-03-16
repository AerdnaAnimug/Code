/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:57:15 by agumina           #+#    #+#             */
/*   Updated: 2023/03/16 16:57:29 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct e_enemy {
	void	*up;
	void	*left;
	void	*right;
	void	*down;
}				t_enemy;

typedef struct s_image {
	int		offset_x;
	int		offset_y;
	int		width;
	int		height;
	void	*floor;
	void	*wall;
	void	*item;
	void	*open_door;
	void	*player;
	void	*c_door;
	void	*patrol;
	void	*e3;
}				t_imgs;

typedef struct e_player {
	void	*top;
	void	*bottom;
	void	*left;
	void	*right;
	int		x;
	int		y;
	int		moves;
	int		collectibles;
}				t_player;

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct s_game {
	void		*mlx;
	void		*mlx_win;
	int			vector_x;
	int			vector_y;
	char		**map;
	t_imgs		imgs;
	t_player	player;
	t_game		enemy;
}				t_game;

#endif