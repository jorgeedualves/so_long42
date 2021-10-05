/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:01:29 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/04 22:09:47 by joeduard         ###   ########.fr       */
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
		print_map(game.map);
		init_window(&game);

	//	print_map(game.map);

		initialize_image(&game);

		map_render(game.map, &game);

		mlx_key_hook(game.win, key_hook, &game);
		
		mlx_loop(game.mlx);

	}
    return (0);
}


