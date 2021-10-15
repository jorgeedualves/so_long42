/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeduard <joeduard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:03:22 by joeduard          #+#    #+#             */
/*   Updated: 2021/10/15 14:23:25 by joeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "../libraries/mlx_linux/mlx.h"
# include "../libraries/libft/libft.h"

# define XK_MISCELLANY
# include <X11/keysymdef.h>
# include <X11/X.h>

typedef struct s_game	t_game;
typedef struct s_map	t_map;

struct	s_game
{
	void	*img;
	void	*mlx;
	void	*wall;
	void	*empty_space;
	void	*collectible;
	void	*player_r;
	void	*player_l;
	void	*player_u;
	void	*player_d;
	void	*exit;
	void	*win;
	void	*enemy_w;
	void	*enemy_a;
	void	*enemy_s;
	void	*enemy_d;
	void	*player_dead;
	char	**map;
	int		animations;
	int		loops;
	int		frame;
	int		img_width;
	int		img_height;
	int		win_height;
	int		win_width;
	int		x;
	int		y;
	int		i;
	int		moves;
	int		collected;
	int		collectibles;
	int		player_direction;
	int		end_game;
};

struct s_map
{
	int	map_row_size;
	int	map_col_size;
	int	player;
	int	exit;
	int	collectible;
	int	space;
};

# define FILE_WALL	"textures/1.xpm"
# define FILE_SPACE	"textures/0.xpm"
# define FILE_EXIT	"textures/E.xpm"
# define FILE_PLAYER_U	"textures/P_U.xpm"
# define FILE_PLAYER_D	"textures/P_D.xpm"
# define FILE_PLAYER_L	"textures/P_L.xpm"
# define FILE_PLAYER_R	"textures/P_R.xpm"
# define FILE_PLAYER_DEAD	"textures/P_DEAD.xpm"
# define FILE_COLLECTIBLE_1	"textures/C.xpm"
# define FILE_COLLECTIBLE_2	"textures/C_2.xpm"
# define FILE_COLLECTIBLE_3	"textures/C_3.xpm"
# define FILE_COLLECTIBLE_4	"textures/C.xpm"
# define FILE_COLLECTIBLE_5	"textures/C.xpm"
# define FILE_ENEMY_W "textures/E_W.xpm"
# define FILE_ENEMY_S "textures/E_S.xpm"
# define FILE_ENEMY_A "textures/E_A.xpm"
# define FILE_ENEMY_D "textures/E_D.xpm"
# define FILE_ENEMY "textures/EN.xpm"

# define SPRITE_SIZE	32

# define X_EVENT_KEY_PRESS	2
# define X_EVENT_DESTROY_NOTIFY	17
# define KEY_W	119
# define KEY_A	97
# define KEY_S	115
# define KEY_D	100

# define KEY_UP		65362
# define KEY_LEFT	65361
# define KEY_DOWN	65364
# define KEY_RIGHT	65363

# define ANIMATION_SPEED 4000
# define GAME_SPEED	3000

void	init_game(t_game *game);
char	**read_map(char *path_to_file);
void	print_map(char **map);
void	map_counter(char **map, t_game *game);
void	map_render(char **map, t_game *game);
void	player_update(int keycode, t_game *game);
void	event_handler(t_game *game);
void	*convert_image(char *img, t_game *game);
void	initialize_image(t_game *game);
void	draw_image(t_game *game, void *img, int x, int y);
void	init_window(t_game *game);
int		key_press(int keycode, t_game *game);
void	handle_situation(t_game *game, int x, int y);
void	show_info(t_game *game);
void	hook_p(t_game *game, int i, int j);
void	count_collectibles(char **map, t_game *game);
int		exit_game(t_game *game);
void	free_map(char **map);
int		is_valid_map(char **map, char *file);
void	map_check_init(t_map *map);
int		has_valid_walls(char **map, t_map *m);
int		has_valid_chars(char **map);
int		has_minimum_chars(char **map, t_map *m);
int		is_rectangular(char **map);
int		has_valid_extension(char *file);
void	animate(t_game *game);
int		loop_hook(t_game *game);
void	swap_positions(char *curr_p, char *nx_p, char curr_val, char nx_val);
void	enemy_update(t_game *game);
int		is_enemy(char enemy);
void	hook_enemy(t_game *game, int i, int j);
void	enemy_init(t_game *game);
void	enemy_translate(t_game *game);
char	*enemy_flip(char *c);
char	*get_next_line(int fd);
void	enemy_kill(t_game *game);
int		display_moves(t_game *game);

#endif