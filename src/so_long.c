/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:01:29 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/07 00:23:44 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{

	t_game game;
	
	if (argc == 2) 
	{
		game.map = read_map(argv[1]);
		if(is_valid_map(argv[1]))
		{
			init_game(&game);
			event_handler(&game);
			mlx_loop(game.mlx);
		}
	}
	else
	{
		 printf("Error\n This map is not valid!");
		free_map(game.map);
		exit(0);
	}
}
