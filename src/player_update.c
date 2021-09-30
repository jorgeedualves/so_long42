/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_update.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:01:29 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/30 20:21:28 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    player_update(int keycode, t_game *game)
{
    if(keycode == 'w') //Action when key pressed
            game->x++;
    else if (keycode == 's')
            game->x--;
    else if (keycode == XK_Escape)
            exit(0);
    printf("x: %d\n", game->x);
}