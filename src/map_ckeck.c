/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_ckeck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:57:55 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/06 20:08:49 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	has_valid_walls(char **map, t_map *m)
{
	int i;
	int j;

	i = 0;
	m->map_col_size = 0;
	while(map[i++])
		m->map_col_size--;

	i = 0;
	m->map_row_size = ft_strlen(*map) - 1;
	while(map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[0][j] != '1' ||
				map[i][0] != '1' || map[i][m->map_row_size] != '1')
				retur(0);
			j++;
		}
		i++;
	}
	return(1);
}

int is_valid_map(char **map)
{
	t_map m;

	if(has_valid_walls(map, &m))
		return (1);
	return (0);
}
