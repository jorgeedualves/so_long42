/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:03:22 by joeduard          #+#    #+#             */
/*   Updated: 2021/09/30 20:19:13 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SO_LONG_H
# define SO_LONG_H
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
# include "../mlx_linux/mlx.h"
# include "../libft/libft.h"

# define XK_MISCELLANY
# include <X11/keysymdef.h>
# include <X11/X.h>

typedef struct s_game   t_game;
typedef struct s_param	t_param;

struct s_game
{
    void	*img;
    void	*mlx;
    void	*win;
    void	*empty_space;
    void	*wall;
    void	*collectible;
    void	*exit;
    void	*player;
    int		win_width;
    int		win_height;
    int		img_width;
    int		img_height;
    int		map_size;
	int		x;
	int		y;
    char	**map;
};

struct s_param
{
	int		keycode;
};

# define FILE_WALL "textures/1.xpm"
# define FILE_SPACE "textures/0.xpm"
# define FILE_COLLECTIBLE "textures/C.xpm"
# define FILE_EXIT "textures/E.xpm"
# define FILE_PLAYER "textures/P.xpm"
# define SPRITE_SIZE	32

# define X_EVENT_KEY_PRESS 2
# define KEY_W 119
# define KEY_D 100
# define KEY_A 97

//src
void	*convert_image(char *img, t_game *game);
void	initialize_image(t_game *game);
void	draw_image(t_game *game, void *img, int x, int y);
int		key_press(int keycode, t_game *game);
void	swap_positions (char *current_pos, char *next_pos, char current_value, char next_value);
char	**read_map(char *path_to_file);
void	init_window(t_game *game);
void	map_render(char **map, t_game *game);
void	map_counter(char **map, t_game *game);
void	print_map(char **map);
void	move_right(t_game *game);
void	event_handler(t_param *param, t_game *game, int (*f)());
void    player_update(int keycode, t_game *game);

#endif
