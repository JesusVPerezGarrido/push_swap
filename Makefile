NAME := push_swap

CC := cc
CFLAGS :=  -Wextra -Werror -Wall -g

LIBFT_DIR := ./lib/libft

INC :=	-I ./inc \
		-I $(LIBFT_DIR)

LIBS := $(LIBFT_DIR)/libft.a

SRCS :=	src/main.c \
		src/list_creation.c \
		src/list_validation.c \
		src/stack_sorting.c \
		src/push_in.c \
		src/perform_move.c \
		src/ft_end.c \
		src/rotate.c \
		src/reverse_rotate.c \
		src/push.c \
		src/swap.c \
		src/t_cost.c

OBJS := $(patsubst src%, obj%, $(SRCS:.c=.o))

all: libft obj $(NAME)

libft:
	@make --silent -C $(LIBFT_DIR)

obj:
	@mkdir -p ./obj

$(NAME): $(OBJS)
	@echo "compiling $(NAME)\n"
	@$(CC) $(OBJS) $(LIBS) $(INC) -o $(NAME)

obj/%.o: src/%.c
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@ && printf "compiling $(notdir $<)\n"

clean:
	@rm -rf ./obj && printf "removing obj files\n"
	@make --silent -C $(LIBFT_DIR) fclean

fclean: clean
	@rm -f $(NAME) && printf "removing $(NAME)\n"

re: fclean all

.PHONY: all, clean, fclean, re, libft, obj
