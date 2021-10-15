/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_update_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:49:26 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/15 02:59:40 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	player_update(int keycode, t_game *game)
{
	if (keycode == KEY_W || keycode == KEY_UP)
	{
		handle_situation(game, game->x - 1, game->y);
		if (game->player_direction != 'm')
			game->player_direction = 'u';
	}
	if (keycode == KEY_S || keycode == KEY_DOWN)
	{
		handle_situation(game, game->x + 1, game->y);
		if (game->player_direction != 'm')
			game->player_direction = 'd';
	}
	if (keycode == KEY_A || keycode == KEY_LEFT)
	{
		handle_situation(game, game->x, game->y - 1);
		if (game->player_direction != 'm')
			game->player_direction = 'l';
	}
	if (keycode == KEY_D || keycode == KEY_RIGHT)
	{
		handle_situation(game, game->x, game->y + 1);
		if (game->player_direction != 'm')
			game->player_direction = 'r';
	}
}
