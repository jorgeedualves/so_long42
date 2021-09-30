/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:45:42 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/30 19:48:13 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    event_handler(t_param *param, t_game *game, int (*f)())
{
    mlx_hook(game->win, X_EVENT_KEY_PRESS, 1L<<0, f, &param);
}
