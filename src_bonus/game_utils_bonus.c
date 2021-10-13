/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_utils_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:01:49 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/13 17:51:08 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	key_press(int keycode, t_game *game)
{
	if (keycode == XK_Escape)
		exit_game(game);
	if (game->end_game)
		return (0);
	player_update(keycode, game);
	map_render(game->map, game);
	show_info(game);
	return (0);
}
