/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:32:27 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/07 00:40:34 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_map(char **map)
{
	int i;

	if (!map)
		return;
	i = 0;
	while (map[i])
	{
		ft_super_free((void *)&map);
		i++;
	}
	ft_super_free((void *)&map);
}

static void free_game(t_game *game)
{
	mlx_destroy_image(game->mlx, game->empty_space);
	mlx_destroy_image(game->mlx, game->wall);
	mlx_destroy_image(game->mlx, game->collectible);
	mlx_destroy_image(game->mlx, game->exit);
	mlx_destroy_image(game->mlx, game->player_r);
	mlx_destroy_image(game->mlx, game->player_l);
	mlx_destroy_image(game->mlx, game->player_u);
	mlx_destroy_image(game->mlx, game->player_d);
	mlx_destroy_window(game->mlx, game->win);
	mlx_destroy_display(game->mlx);
	ft_super_free(&game->mlx);
}

int exit_game(t_game *game)
{
	free_map(game->map);
	free_game(game);
	exit(0);
	return (0);
}
