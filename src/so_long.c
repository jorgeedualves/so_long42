/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:01:29 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/24 17:50:02 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(void)
{
	t_game game;
	char **map;

	map = read_map("assets/maps/map.ber");
	init_game(&game);
	map_counter(map, &game);
	print_map(map);

    return (0);
}


