/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:42:04 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/09 10:08:02 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	hook_p(t_game *game, int i, int j)
{
	draw_image(game, game->player_r, i, j);
	if (game->player_direction == 'u')
		draw_image(game, game->player_u, i, j);
	if (game->player_direction == 'd')
		draw_image(game, game->player_d, i, j);
	if (game->player_direction == 'l')
		draw_image(game, game->player_l, i, j);
	if (game->player_direction == 'r')
		draw_image(game, game->player_r, i, j);
	game->x = i;
	game->y = j;
}
