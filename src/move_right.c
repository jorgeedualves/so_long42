/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:52:08 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/30 20:05:55 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "so_long.h"

void    move_right(t_game *game)
{
    int i;
    int j;

    i = game->x;
    j = game->y;
    if(game->map[i][j + 1] == '0')
        swap_positions(&game->map[i][j], &game->map[i][j + 1], 'P', '0');
}