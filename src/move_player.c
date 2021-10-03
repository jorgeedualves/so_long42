/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:52:08 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/03 14:08:21 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "so_long.h"

void    move_player(t_game *game, int x, int y)
{
    int i;
    int j;

    i = game->x;
    j = game->y;
    
    if(game->map[x][y] != '1')
    {
        swap_positions(&game->map[i][j], &game->map[x][y], 'P', '0');
        game->x = x;
        game->y = y;
        game->moves++;
    }
    print_map(game->map);
}

void swap_positions (char *current_pos, char *next_pos, char current_value, char next_value)
{
    *current_pos = next_value;
    *next_pos = current_value;
}
