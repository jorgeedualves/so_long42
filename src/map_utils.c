/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:18:33 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/05 17:19:04 by joeduard         ###   ########.fr       */
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
    game->map_size = game->win_height *game->win_width;
}

void    print_map(char **map)
{
    int i;
    
    i = 0;
    while (map[i])
    {
        printf("%s\n", map[i]);
        i++;
    }
    printf("\n");
}
