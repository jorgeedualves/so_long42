/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 21:27:33 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/09 10:08:57 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_window(t_game *game)
{
	game->win = mlx_new_window
		(game->mlx, game->win_width * SPRITE_SIZE,
			game->win_height * SPRITE_SIZE, "SO_LONG");
}
