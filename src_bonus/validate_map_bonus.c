/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:12:28 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/15 03:04:08 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	is_valid_map(char **map, char *file)
{
	t_map	mp;

	if (!map)
		return (0);
	map_check_init(&mp);
	if (has_valid_walls(map, &mp) && has_valid_chars(map)
		&& has_minimum_chars(map, &mp) && is_rectangular(map)
		&& has_valid_extension(file))
		return (1);
	return (0);
}
