CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =	push_swap.c		\
		check.c			\
		creat_list.c	\
		ft_operations.c	\
		linked_list.c	\
		radix_sort.c	\
		sort_algo.c		\

SRC_DIR = ./SRC
OBJ_DIR = OBJS

OBJS = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

NAME = push_swap
LIBFTDIR = ./libft

all: $(NAME)

$(NAME): $(OBJS)  ./include/push_swap.h
	$(MAKE) -C $(LIBFTDIR)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFTDIR) -lft -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(MAKE) clean -C $(LIBFTDIR)
	rm -fr $(OBJ_DIR)

fclean: clean
	$(MAKE) fclean -C $(LIBFTDIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re