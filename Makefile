NAME = so_long

LIBFT_DIR = libraries/libft
LIBFT = $(LIBFT_DIR)/libft.a

MLX_DIR = libraries/mlx_linux
MLX = $(MLX_DIR)/libmlx.a

RM = rm -rf

XPM_DIR = textures
IMG_DIR = assets/img
SRC_DIR = src
OBJ_DIR = obj
HEADERS = src/so_long.h

INCLUDE_DIR = includes

SRC_FILES = so_long.c read_map.c map_render.c draw_image.c init_window.c	\
			init_image.c map_utils.c player_update.c \
			game_utils.c move_player.c show_info.c hook_p.c count_collectibles.c \

SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC = clang
CFLAGS = -Wall -Wextra -Werror
LIBFLAGS = -lft -lXext -lX11 -lmlx -lm
VALGRIND = valgrind -q --leak-check=full --show-leak-kinds=all -s --track-origins=yes ./so_long
SANITIZE = -fsanitize=address

all: $(NAME)

$(NAME): $(OBJ_DIR) $(LIBFT) $(MLX) $(OBJ)
	$(CC) $(OBJ) -L$(LIBFT_DIR) -L$(MLX_DIR) $(LIBFLAGS) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	$(CC) $(CFLAGS) -c -I$(INCLUDE_DIR) -o $@ $<

$(LIBFT):
	make -C $(LIBFT_DIR)

$(MLX):
	make -C $(MLX_DIR)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

run:
	./so_long "assets/maps/another_4.ber"

resize:
	mogrify -resize 32X32 $(IMG_DIR)/*.png && make img

img:
	convert $(IMG_DIR)/*.png -set filename:base "%[basename]" "%[filename:base].xpm" && mv *.xpm $(XPM_DIR)

valgrind:
	$(VALGRIND)

clean:
	$(RM) $(OBJ)

fclean: clean
	make -C $(MLX_DIR) clean
	make -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re