/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_update_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 02:48:31 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/15 02:48:42 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	update_enemy_position(t_game *game, int i, int j)
{
	if (game->map[i][j] == 'i' && game->map[i - 1][j] == '0')
		swap_positions(&game->map[i][j], &game->map[i - 1][j], 'I', '0');
	else if (game->map[i][j] == 'i' && game->map[i - 1][j] == 'P')
		enemy_kill(game);
	else if (game->map[i][j] == 'k' && game->map[i + 1][j] == '0')
		swap_positions(&game->map[i][j], &game->map[i + 1][j], 'K', '0');
	else if (game->map[i][j] == 'k' && game->map[i + 1][j] == 'P')
		enemy_kill(game);
	else if (game->map[i][j] == 'j' && game->map[i][j - 1] == '0')
		swap_positions(&game->map[i][j], &game->map[i][j - 1], 'J', '0');
	else if (game->map[i][j] == 'j' && game->map[i][j - 1] == 'P')
		enemy_kill(game);
	else if (game->map[i][j] == 'l' && game->map[i][j + 1] == '0')
		swap_positions(&game->map[i][j], &game->map[i][j + 1], 'L', '0');
	else if (game->map[i][j] == 'l' && game->map[i][j + 1] == 'P')
		enemy_kill(game);
	else
		enemy_flip(&game->map[i][j]);
}

void	enemy_update(t_game *game)
{
	int		i;
	int		j;

	if (game->loops < GAME_SPEED || game->end_game)
	{
		game->loops++;
		return ;
	}
	game->loops = 0;
	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (is_enemy(game->map[i][j]))
				update_enemy_position(game, i, j);
			j++;
		}
		i++;
	}
	enemy_translate(game);
	map_render(game->map, game);
}
