/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:57:52 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/07 17:22:59 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	show_info(t_game *game)
{
	printf("Moves: %d\n", game->moves);
	printf("Collectibles: %d, Collocted: %d", game->collectibles, game->collected);
	print_map(game->map);
}
