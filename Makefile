CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SRC = push_swap.c check.c creat_list.c ft_operations.c linked_list.c radix_sort.c sort_algo.c
OBJS = $(SRC:.c=.o)
NAME = push_swap
LIBFTDIR = ./libft

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFTDIR)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFTDIR) -lft -o $(NAME)

clean:
	$(MAKE) clean -C $(LIBFTDIR)
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBFTDIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re