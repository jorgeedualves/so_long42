/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_render_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 22:13:51 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/15 04:39:59 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	map_render(char **map, t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == '1')
				draw_image(game, game->wall, i, j);
			else if (map[i][j] == '0')
				draw_image(game, game->empty_space, i, j);
			else if (map[i][j] == 'C')
				draw_image(game, game->collectible, i, j);
			else if (map[i][j] == 'E')
				draw_image(game, game->exit, i, j);
			else if (is_enemy(map[i][j]))
				hook_enemy(game, i, j);
			else if (map[i][j] == 'P')
				hook_p(game, i, j);
			j++;
		}
		i++;
	}
}
