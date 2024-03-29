/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_p_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:42:04 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/15 18:28:07 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	hook_p(t_game *game, int i, int j)
{
	if (game->player_direction == 'u')
		draw_image(game, game->player_u, i, j);
	if (game->player_direction == 'd')
		draw_image(game, game->player_d, i, j);
	if (game->player_direction == 'l')
		draw_image(game, game->player_l, i, j);
	if (game->player_direction == 'r')
		draw_image(game, game->player_r, i, j);
	if (game->player_direction == 'm')
		draw_image(game, game->player_dead, i, j);
	game->x = i;
	game->y = j;
}
