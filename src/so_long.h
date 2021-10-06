/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:03:22 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/06 15:48:09 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
# include "../libraries/mlx_linux/mlx.h"
# include "../libraries/libft/libft.h"

# define XK_MISCELLANY
# include <X11/keysymdef.h>
# include <X11/X.h>

typedef struct s_game   t_game;

struct s_game
{
    void	*img;
    void	*mlx;
    void	*win;
    void	*empty_space;
    void	*wall;
    void	*collectible;
    void    *player_r;
    void    *player_l;
    void    *player_u;
    void    *player_d;
    void	*exit;
    void	*player;
    int		win_width;
    int		win_height;
    int		img_width;
    int		img_height;
    int		map_size;
	int		x;
	int		y;
    int     moves;
    int     collected;
    int     collectibles;
    int     player_direction;
    char	**map;
    char    **map_read;
};

# define FILE_WALL "textures/1.xpm"
# define FILE_SPACE "textures/0.xpm"
# define FILE_COLLECTIBLE "textures/C.xpm"
# define FILE_EXIT "textures/E.xpm"
# define FILE_PLAYER_U "textures/P_U.xpm"
# define FILE_PLAYER_D "textures/P_D.xpm"
# define FILE_PLAYER_L "textures/P_L.xpm"
# define FILE_PLAYER_R "textures/P_R.xpm"

# define SPRITE_SIZE	32

# define X_EVENT_KEY_PRESS 2
# define KEY_W 119
# define KEY_A 97
# define KEY_S 115
# define KEY_D 100

# define KEY_UP 65362
# define KEY_LEFT 65361
# define KEY_DOWN 65364
# define KEY_RIGHT 65363

//src
char    **read_map(char *path_to_file);
void    print_map (char **map);
void    map_counter (char **map, t_game *game);
void    reload_map(char **map, t_game *game);
void	player_update(int keycode, t_game *game);
void    initialize_image(t_game *game);
void    draw_image(t_game *game, void *img, int x, int y);
void    init_window(t_game *game);
int     key_press(int keycode, t_game *game);
void    handle_situation(t_game *game, int x, int y);
void    show_info(t_game *game);
void    hook_p (t_game *game, int i, int j);
void    count_collectibles(char **map, t_game *game);

#endif
