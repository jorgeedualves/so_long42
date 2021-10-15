/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:49:56 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/15 18:30:32 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	initialize_mlx(t_game *game)
{
	game->mlx = mlx_init();
}

static void	initialize_data(t_game *game)
{
	map_counter(game->map, game);
	count_collectibles(game->map, game);
	game->moves = 0;
	game->collected = 0;
	game->frame = 0;
	game->end_game = 0;
	game->loops = 0;
	game->animations = 0;
	game->i = 0;
	game->player_direction = 'r';
}

static void	initialize_rendering(t_game *game)
{
	init_window(game);
	initialize_image(game);
	map_render(game->map, game);
}

void	init_game(t_game *game)
{
	initialize_mlx(game);
	initialize_data(game);
	enemy_init(game);
	initialize_rendering(game);
}
