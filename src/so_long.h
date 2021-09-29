/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:03:22 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/27 23:05:28 by joeduard         ###   ########.fr       */
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

#define SPRITE_SIZE 32

typedef struct s_game
{
    void *img;
    void *mlx;
    void *win;
    void *empty_space;
    void *wall;
    void *collectible;
    void *exit;
    void *player;
    int win_width;
    int win_height;
    int img_width;
    int img_height;
    char **map;
}t_game;

# define FILE_WALL "textures/1.xpm"
# define FILE_EMPTY "textures/0.xpm"
# define FILE_COLLECTIBLE "textures/C.xpm"
# define FILE_EXIT "textures/E.xpm"
# define FILE_PLAYER "textures/P.xpm"


char    **read_map(char *path_to_file);
void    print_map(char **map);
void    init_window(t_game *game);

//map_utils
void map_counter(char **map, t_game *game);
void map_render(char **map, t_game *game);
void draw_image(t_game *game, void *img, int x, int y);
void *convert_image(char *img, t_game *game);
void initialize_image(t_game *game);
#endif
