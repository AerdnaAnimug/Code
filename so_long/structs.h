/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agumina <agumina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:57:15 by agumina           #+#    #+#             */
/*   Updated: 2023/11/15 12:36:20 by agumina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct e_enemy {
	void	*c1;
	void	*c2;
}				t_enemy;

typedef struct s_image {
	int		offset_x;
	int		offset_y;
	int		width;
	int		height;
	void	*floor;
	void	*wall;
	void	*item1;
	void	*item2;
	void	*item3;
	void	*open_door;
	void	*player;
	void	*c_door;
	void	*enemy;
}				t_imgs;

typedef struct e_player {
	void	*top;
	void	*top2;
	void	*bottom;
	void	*bottom2;
	void	*left;
	void	*left2;
	void	*right;
	void	*right2;
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
	int			done;
	t_imgs		imgs;
	t_player	player;
	t_enemy		enemy;
	int			frame;
	int			door_x;
	int			door_y;
	t_data		img;
}				t_game;

#endif