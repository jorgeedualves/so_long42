NAME = so_long
NAME_BONUS = so_long_bonus

LIBFT_DIR = libraries/libft
LIBFT = $(LIBFT_DIR)/libft.a

MLX_DIR = libraries/mlx_linux
MLX = $(MLX_DIR)/libmlx.a

RM = rm -rf

XPM_DIR = textures
IMG_DIR = assets/img

SRC_DIR = src
SRC_BONUS_DIR = src_bonus

OBJ_DIR = obj
OBJ_BONUS_DIR = obj_bonus

HEADERS = src/so_long.h
HEADERS_BONUS = src_bonus/so_long_bonus.h

INCLUDE_DIR = includes

SRC_FILES = so_long.c read_map.c map_render.c draw_image.c init_window.c	\
			init_image.c map_utils.c player_update.c \
			game_utils.c move_player.c show_info.c hook_p.c \
			init_game.c event_handler.c exit_game.c map_check.c \
			map_check_init.c validate_map.c get_next_line.c

SRC_FILES_BONUS = so_long_bonus.c read_map_bonus.c map_render_bonus.c \
			draw_image_bonus.c init_window_bonus.c	\
			init_image_bonus.c map_utils_bonus.c player_update_bonus.c \
			game_utils_bonus.c move_player_bonus.c show_info_bonus.c hook_p_bonus.c \
			init_game_bonus.c event_handler_bonus.c exit_game_bonus.c map_check_bonus.c \
			map_check_init_bonus.c validate_map_bonus.c animation_bonus.c loop_hook_bonus.c \
			enemy_update_bonus.c enemy_utils_bonus.c hook_enemy_bonus.c enemy_init_bonus.c \
			get_next_line_bonus.c display_moves.c

SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
SRC_BONUS = $(addprefix $(SRC_BONUS_DIR)/, $(SRC_FILES_BONUS))

OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJ_BONUS = $(SRC_BONUS:$(SRC_BONUS_DIR)/%.c=$(OBJ_BONUS_DIR)/%.o)

CC = clang
CFLAGS = -Wall -Wextra -Werror

LIBFLAGS = -lft -lXext -lX11 -lmlx -lm

all: $(NAME)

bonus: $(NAME_BONUS)

$(NAME): $(OBJ_DIR) $(LIBFT) $(MLX) $(OBJ)
	$(CC) $(OBJ) -L$(LIBFT_DIR) -L$(MLX_DIR) $(LIBFLAGS) -o $@

$(NAME_BONUS): $(OBJ_BONUS_DIR) $(LIBFT) $(MLX) $(OBJ_BONUS)
	$(CC) $(OBJ_BONUS) -L$(LIBFT_DIR) -L$(MLX_DIR) $(LIBFLAGS) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	$(CC) $(CFLAGS) -c -I$(INCLUDE_DIR) -o $@ $<

$(OBJ_BONUS_DIR)/%.o: $(SRC_BONUS_DIR)/%.c $(HEADERS_BONUS)
	$(CC) $(CFLAGS) -c -I$(INCLUDE_DIR) -o $@ $<

$(LIBFT):
	make -C $(LIBFT_DIR)

$(MLX):
	make -C $(MLX_DIR)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_BONUS_DIR):
	mkdir $(OBJ_BONUS_DIR)

run:
	./$(NAME) "assets/maps/another.ber"

runb:
	./$(NAME_BONUS) "assets/maps/another.ber"

runbv:
	$(MAKE) bonus && valgrind -q --leak-check=full --show-leak-kinds=all -s --track-origins=yes ./so_long_bonus "assets/maps/another_2.ber"

runv:
	$(MAKE) && valgrind -q --leak-check=full --show-leak-kinds=all -s --track-origins=yes ./so_long assets/maps/another_2.ber

runiv:
	$(MAKE) && valgrind -q --leak-check=full --show-leak-kinds=all -s --track-origins=yes ./so_long assets/maps/another.berr

resize:
	mogrify -resize 32X32 $(IMG_DIR)/*.jpeg && make img

img:
	convert $(IMG_DIR)/*.jpeg -set filename:base "%[basename]" "%[filename:base].xpm" && mv *.xpm $(XPM_DIR)

clean:
	$(RM) $(OBJ_DIR) $(OBJ_BONUS_DIR)

fclean: clean
	make -C $(MLX_DIR) clean
	make -C $(LIBFT_DIR) fclean
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean all

reb: fclean bonus

.PHONY: clean fclean all re bonus