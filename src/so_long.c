/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:01:29 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/27 23:05:58 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{

	t_game game;   //  argc == 0   argc == 1       argc == 2 
	if (argc == 2) // [ [main]    [./so_long] ["assets/map/map.ber"] ]
				   //			   argv == 0       argv == 1
	{
		game.mlx = mlx_init();
		game.map = read_map(argv[1]);
		map_counter(game.map, &game);
		print_map(game.map);
		init_window(&game);
		initialize_image(&game);
		map_render(game.map, &game);
		mlx_loop(game.mlx);
	}
    return (0);
}


