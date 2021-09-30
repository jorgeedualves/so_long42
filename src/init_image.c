/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 22:50:06 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/30 19:37:37 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void *convert_image(char *img, t_game *game)
{
    game->img = mlx_xpm_file_to_image
        (game->mlx, img, &game->img_width, &game->img_height);
    return (game->img);
}

void initialize_image(t_game *game)
{
    game->wall = convert_image(FILE_WALL, game);
    game->empty_space = convert_image(FILE_SPACE, game);
    game->collectible = convert_image(FILE_COLLECTIBLE, game);
    game->exit = convert_image(FILE_EXIT, game);
    game->player = convert_image(FILE_PLAYER, game);
}