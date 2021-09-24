/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:18:33 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/24 18:33:27 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void map_counter(char **map, t_game *game)
{
    int i;


    i = 0;
    game->win_height = 0; // altura
    while(map[i])
    {   
        game->win_height++;
        i++;
    }
    game->win_width = ft_strlen(*map);  // largura 
    printf("Largura do Mapa: %d\n\n", game->win_width);
}

/*
        height = 2  width = 6
[map
   0 ["123456\0"] \n  0-6 
   1 ["789987\0"] \n' 1-6
]
*/