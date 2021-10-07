/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:12:28 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/07 19:13:27 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_valid_map(char **map, char *file)
{
	t_map m;

	if(!map)
		return (0);
	map_check_init(&m);
	if (has_valid_walls(map, &m) && has_valid_chars(map) 
	&& has_minimum_chars(map, &m) && is_rectangular(map) 
	&& has_valid_extension(file))
		return (1);
	return (0);
}
