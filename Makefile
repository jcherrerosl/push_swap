CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR)
NAME = push_swap
AR = ar rcs
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
PRINTF_DIR = libft/ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a

SRC = push_swap.c	swaps.c	pushes.c	reverses.c	rotates.c\

OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(PRINTF) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(PRINTF):
	make -C $(PRINTF_DIR)

$(NAME): $(OBJ) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -L $(LIBFT_DIR) -lft -L $(PRINTF_DIR) -lftprintf

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	make clean -C $(PRINTF_DIR)
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re