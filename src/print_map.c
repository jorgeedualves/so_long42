/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:25:55 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/23 19:09:31 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    print_map(char **map)
{
 int i;

 i = 0;

    while (map[i])
    {
        printf("%s\n", map[i]);
        i++;
    }
}
//map = jorge

// *map[i]  = [j]  
// map [i]  = [jorge]
// &map [i] = [safdas]