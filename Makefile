CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR)
NAME = push_swap
AR = ar rcs
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = push_swap.c	swaps.c	pushes.c	reverses.c	rotates.c \
		algorithm.c \

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
