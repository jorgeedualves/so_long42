/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:03:22 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/23 18:35:14 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
# include "../mlx_linux/mlx.h"
# include "../libft/libft.h"
# include <math.h>
# define XK_MISCELLANY
# include <X11/keysymdef.h>
# include <X11/X.h>
# include <fcntl.h>

char    **read_map(char *path_to_file);
void    print_map(char **map);

#endif
