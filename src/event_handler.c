/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:20:14 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/07 00:40:19 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void event_handler(t_game *game)
{
	mlx_hook(game->win, X_EVENT_KEY_PRESS, 1L<<0, &key_press, game);
	mlx_hook(game->win, X_EVENT_DESTROY_NOTIFY, 0, &exit_game, game);
}
