NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror 
 
SRC = list.c parsing.c push_a.c swap.c

OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

LIBFT = ./libft/libft.a

OBJ_DIR = build

all: $(NAME)

$(NAME): $(OBJ)
	@make -C ./libft 1>/dev/null
	@$(CC) $(CFLAGS) -o $(NAME) $(LIBFT) $(TOOLS) $(LINK) $(SRC) -I./includes -I./libft
	@echo "Compilation successful!"

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@ -I./includes -I./libft

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@make clean -C ./libft 1>/dev/null
	@rm -rf $(OBJ_DIR)

fclean: clean
	@make fclean -C ./libft 1>/dev/null
	@rm -f $(NAME) *.o

re: fclean $(NAME)

.PHONY: all fclean clean re

/usr/bin/ld: /tmp/parsing-7eeea0.o: in function `ft_convert_args':
parsing.c:(.text+0x2a4): undefined reference to `ft_atoi'
/usr/bin/ld: parsing.c:(.text+0x301): undefined reference to `ft_atoi'
/usr/bin/ld: /tmp/parsing-7eeea0.o: in function `main':
parsing.c:(.text+0x455): undefined reference to `ft_split'
clang: error: linker command failed with exit code 1 (use -v to see invocation)
