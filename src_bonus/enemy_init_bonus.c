/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_init_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 02:47:52 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/15 02:48:06 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	place_enemy(char **map, int i, int j)
{
	if (map[i - 1][j] == '0')
		map[i - 1][j] = 'k';
	else if (map[i + 1][j] == '0')
		map[i + 1][j] = 'k';
	else if (map[i][j - 1] == '0')
		map[i][j - 1] = 'k';
	else if (map[i][j + 1] == '0')
		map[i][j + 1] = 'k';
	else
		return ;
}

void	enemy_init(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == 'C')
				place_enemy(game->map, i, j);
			j++;
		}
		i++;
	}
}
