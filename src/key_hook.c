/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:49:26 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/02 22:14:13 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int    key_hook(int keycode, t_game *game)
{

    if (keycode == KEY_W || keycode == KEY_UP) 
        move_player(game, game->x - 1, game->y);
     if (keycode == KEY_S || keycode == KEY_DOWN)
        move_player(game, game->x + 1, game->y);
     if (keycode == KEY_D || keycode == KEY_RIGHT)
        move_player(game, game->x, game->y + 1);
     if (keycode == KEY_A || keycode == KEY_LEFT)
        move_player(game, game->x, game->y - 1);
    printf("\nproxima casa: %d \n", game->x + 1);
    game->moves++;  
    printf("moves: %d\n", game->moves);
    return (0);
}