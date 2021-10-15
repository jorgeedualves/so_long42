/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 02:45:51 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/15 04:40:12 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	update_frame(t_game *game)
{
	if (game->frame < 5)
		game->frame++;
	else
		game->frame = 1;
}

static int	animate_collectibles(t_game *game, int frame)
{
	mlx_destroy_image(game->mlx, game->collectible);
	if (game->frame == 1)
		game->collectible = convert_image(FILE_COLLECTIBLE_1, game);
	else if (game->frame == 2)
		game->collectible = convert_image(FILE_COLLECTIBLE_2, game);
	else if (game->frame == 3)
		game->collectible = convert_image(FILE_COLLECTIBLE_3, game);
	else if (game->frame == 4)
		game->collectible = convert_image(FILE_COLLECTIBLE_4, game);
	else if (game->frame == 5)
		game->collectible = convert_image(FILE_COLLECTIBLE_5, game);
	return (frame);
}

void	animate(t_game *game)
{
	if (game->animations < ANIMATION_SPEED)
	{
		game->animations++;
		return ;
	}
	game->animations = 0;
	update_frame(game);
	animate_collectibles(game, game->frame);
	map_render(game->map, game);
}
