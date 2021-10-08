/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:52:08 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/08 20:10:09 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	swap_positions(char *current_pos, char *next_pos,
							char current_value, char next_value)
{
	*current_pos = next_value;
	*next_pos = current_value;
}

static void	handle_0(t_game *game, int x, int y)
{
	int	i;
	int	j;

	i = game->x;
	j = game->y;
	swap_positions(&game->map[i][j], &game->map[x][y], 'P', '0');
	game->moves++;
	game->x = x;
	game->y = y;
}

static void	handle_c(t_game *game, int x, int y)
{
	int	i;
	int	j;

	i = game->x;
	j = game->y;
	swap_positions(&game->map[i][j], &game->map[x][y], 'P', '0');
	game->collected++;
	game->moves++;
	game->x = x;
	game->y = y;
}

static void	handle_e(t_game *game, int x, int y)
{
	int	i;
	int	j;

	i = game->x;
	j = game->y;
	if (game->collected == game->collectibles)
	{
		swap_positions(&game->map[i][j], &game->map[x][y], 'E', '0');
		game->moves++;
		game->x = x;
		game->y = y;
	}
}

void	handle_situation(t_game *game, int x, int y)
{
	if (game->map[x][y] != '1')
	{
		if (game->map[x][y] == '0')
			handle_0(game, x, y);
		if (game->map[x][y] == 'C')
			handle_c(game, x, y);
		if (game->map[x][y] == 'E')
			handle_e(game, x, y);
	}
}
