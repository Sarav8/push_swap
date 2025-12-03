SRCS = main.c \
       index.c \
       mov_push.c \
       mov_rerotate.c \
       mov_rotate.c \
	   mov_swap.c \
	   parsing.c \
	   sort_large.c \
	   sort_small.c \
	   stack_init.c \
	   stack_operations.c \
       utils_sort.c 



NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

OBJS = $(SRCS:.c=.o)

# LIBFT
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a


all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
