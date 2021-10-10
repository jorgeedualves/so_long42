/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:17:49 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/10 19:20:37 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_check_init(t_map *map)
{
	map->collectible = 0;
	map->exit = 0;
	map->player = 0;
	map->space = 0;
	map->map_row_size = 0;
	map->map_col_size = 0;
}
