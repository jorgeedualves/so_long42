/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:25:55 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/24 16:03:06 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    print_map(char **map)
{
    while (*map)
        printf("%s\n", *map++);
}


//map = jorge
// *map  = [jorge]  
// map[i]  = [jorge]
// &map = [safdas]