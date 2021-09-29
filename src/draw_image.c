/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 22:42:30 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/27 22:49:52 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void draw_image(t_game *game, void *img, int x, int y)
{
    mlx_put_image_to_window
        (game->mlx, game->win, img, y * SPRITE_SIZE, x * SPRITE_SIZE);
}