# Nombre de la biblioteca
NAME = libft.a

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directorios
SRC_DIR = srcs
INC_DIR = inc
OBJ_DIR = obj

# Archivos fuente (incluyendo subdirectorios)
SRC = $(shell find $(SRC_DIR) -name '*.c')
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

# Reglas
all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $@ $^
	@echo "libft.a created successfully!"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@
	@echo "Compiling $<..."

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Object files cleaned."

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed."

re: fclean all

.PHONY: all clean fclean re
