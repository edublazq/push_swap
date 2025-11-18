NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
RM = rm -rf
LIBFT_DIR = ./inc/Libft
LIBFT = $(LIBFT_DIR)/libft.a
SRCS = ./srcs/error_manager.c ./srcs/main.c ./srcs/parse.c ./srcs/stacks/stack_utils.c ./srcs/stacks/free_stack.c \
./srcs/solving/sort.c ./srcs/solving/operations/push.c ./srcs/solving/operations/swap.c ./srcs/solving/operations/rotate.c \
./srcs/solving/operations/reverse_rotate.c ./srcs/solving/minor_sort.c ./srcs/indexing.c ./srcs/solving/big_sort.c \
./srcs/solving/aux.c
OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} 

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@echo " 🧬 PUSH_SWAP 🧬"
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR) all

clean:
	@echo "🗑️  Removing objs 🗑️"
	@$(RM) $(OBJS) 
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@echo "🗑️  Removing $(NAME) 🗑️"
	@$(RM) $(NAME) 
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re 
