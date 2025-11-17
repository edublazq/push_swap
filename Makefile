NAME = push_swap
NAME_BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
RM = rm -rf
LIBFT_DIR = ./inc/Libft
LIBFT = $(LIBFT_DIR)/libft.a
SRCS = ./srcs/error_manager.c ./srcs/main.c ./srcs/parse.c ./srcs/stacks/stack_utils.c ./srcs/stacks/free_stack.c \
./srcs/solving/sort.c ./srcs/solving/operations/push.c ./srcs/solving/operations/swap.c ./srcs/solving/operations/rotate.c \
./srcs/solving/operations/reverse_rotate.c ./srcs/solving/minor_sort.c ./srcs/indexing.c ./srcs/solving/big_sort.c \
./srcs/solving/aux.c
BONUS_SRCS = 
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} 

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@echo " 🧬 Compiling push_swap 🧬"
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

bonus: $(LIBFT) $(BONUS_OBJS)
	@echo "Compiling bonus push_swap..."
	@$(CC) $(CFLAGS) $(BONUS_OBJS) $(GNL) $(LIBFT) -o $(NAME_BONUS)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR) all

clean:
	@echo "🗑️ Removing objs"
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@echo "🗑️ Removing $(NAME)"
	@$(RM) $(NAME) $(NAME_BONUS) $(BONUS_OBJS)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re bonus
