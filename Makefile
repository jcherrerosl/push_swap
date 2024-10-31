CC = cc
CFLAGS = -I$(LIBFT_DIR) -fsanitize=address -g3
NAME = push_swap
AR = ar rcs
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = push_swap.c	swaps.c	pushes.c	reverses.c	rotates.c \
		algorithm.c  sorting.c utils.c utils2.c op_stacks.c check_args.c handle_args.c\

OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -L $(LIBFT_DIR) -lft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
