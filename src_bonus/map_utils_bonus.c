/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:18:33 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/15 02:58:33 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	map_counter(char **map, t_game *game)
{
	int	i;

	i = 0;
	game->win_height = 0;
	while (map[i])
	{
		game->win_height++;
		i++;
	}
	game->win_width = ft_strlen(*map);
}

void	print_map(char **map)
{
	int	i;

	i = 0;
	printf("\n");
	while (map[i])
	{
		printf("%s\n", map[i]);
		i++;
	}
	printf("\n");
}

void	count_collectibles(char **map, t_game *game)
{
	int	i;
	int	j;

	game->collectibles = 0;
	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'C')
				game->collectibles++;
			j++;
		}
		i++;
	}
}
