/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:17:59 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/30 19:25:26 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int key_press(int keycode, t_game *game)
{
    player_update(keycode, game);
    return (0);
}

void swap_positions (char *current_pos, char *next_pos, char current_value, char next_value)
{
    *current_pos = next_value;
    *next_pos = current_value;
}