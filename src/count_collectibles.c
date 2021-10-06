/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_collectibles.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:20:44 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/05 14:49:22 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void count_collectibles(char **map, t_game *game)
{
    int i;
    int j;

    i = 0;
    while(map[i])
    {
        j = 0;
        while(map[i][j])
        {
            if(map[i][j] == 'C')
                game->collectibles++;
            j++;
        }
        i++;
    }
}
