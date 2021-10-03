/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_update.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:01:29 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/01 14:02:16 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    player_update(int keycode, t_game *game, int x, int y)
{
    static int nx;

    nx = 9;
    printf("valor de x da static: %d\n", nx);
    printf("valor de x: %d\n", game->x);
    printf("valor de y: %d\n", game->y);
    
    if(keycode == 'w') //Action when key pressed
            x++;
    else if (keycode == 's')
            y++;
    else if (keycode == XK_Escape)
            exit(0);
    printf("x: %d\n", x);
}