NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -g

SRC = ft_atoi.c list.c parsing.c push_a.c swap.c

OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

OBJ_DIR = build

#$(NAME): $(OBJ)
#	ar rcs $(NAME) $(OBJ)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	rm -f $(OBJ)
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

