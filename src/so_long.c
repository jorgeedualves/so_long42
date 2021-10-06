/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:01:29 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/05 15:13:34 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{

	t_game game;
	
	if (argc == 2) 
				   
	{
		game.mlx = mlx_init();
		game.map = read_map(argv[1]);
		map_counter(game.map, &game);
		count_collectibles(game.map, &game);
		game.moves = 0;
		game.collected = 0;
		init_window(&game);

		print_map(game.map);

		initialize_image(&game);

		reload_map(game.map, &game);

		mlx_hook(game.win, X_EVENT_KEY_PRESS, 1L<<0, &key_press, &game);
		
		mlx_loop(game.mlx);

	}
	else
	{
		printf("No map specified!");
        exit(0);
	}

}
