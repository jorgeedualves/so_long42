/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:03:22 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/24 17:49:56 by joeduard         ###   ########.fr       */
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

typedef struct s_game
{
    void *img;
    void *mlx;
    int win_width;
    int win_height;
}t_game; 


char    **read_map(char *path_to_file);
void    print_map(char **map);

//map_utils
void map_counter(char **map, t_game *game);
void init_game(t_game *game);

#endif
