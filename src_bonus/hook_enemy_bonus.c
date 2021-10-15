/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_enemy_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 02:53:29 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/15 02:53:43 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	hook_enemy(t_game *game, int i, int j)
{
	if (game->map[i][j] == 'i')
		draw_image(game, game->enemy_w, i, j);
	if (game->map[i][j] == 'k')
		draw_image(game, game->enemy_s, i, j);
	if (game->map[i][j] == 'j')
		draw_image(game, game->enemy_a, i, j);
	if (game->map[i][j] == 'l')
		draw_image(game, game->enemy_d, i, j);
}
