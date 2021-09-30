/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:01:29 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/30 20:27:14 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{

	t_game game;
	t_param param;

	if (argc == 2) 
				   
	{
		game.mlx = mlx_init();
		game.map = read_map(argv[1]);
		map_counter(game.map, &game);
		print_map(game.map);
		init_window(&game);

		print_map(game.map);

		initialize_image(&game);

		map_render(game.map, &game);

		key_press(param.keycode, &game);

		event_handler(&param, &game, &key_press);

		mlx_loop(game.mlx);
	}
    return (0);
}


