NAME		:=	push_swap
B_NAME		:=	checker

CC			:=	cc
CFLAGS		:=	-Wextra -Werror -Wall -g

LIBFT_DIR	:=	./lib/libft

INC 		:=	-I ./inc \
				-I $(LIBFT_DIR)

LIBS		:=	$(LIBFT_DIR)/libft.a

SRCS		:=	src/main.c \
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

B_SRCS		:=	bonus/main_bonus.c \
				bonus/list_creation_bonus.c \
				bonus/list_validation_bonus.c \
				bonus/stack_sorting_bonus.c \
				bonus/ft_end_bonus.c \
				bonus/rotate_bonus.c \
				bonus/reverse_rotate_bonus.c \
				bonus/push_bonus.c \
				bonus/swap_bonus.c

OBJS		:=	$(patsubst src%, obj%, $(SRCS:.c=.o))
B_OBJS		:=	$(patsubst bonus%, obj%, $(B_SRCS:.c=.o))

all: libft obj $(NAME)

bonus: libft obj $(B_NAME)

libft:
	@make --silent -C $(LIBFT_DIR)

obj:
	@mkdir -p ./obj

$(NAME): $(OBJS)
	@printf "compiling $(NAME)\n"
	@$(CC) $(OBJS) $(LIBS) $(INC) -o $(NAME)

$(B_NAME): $(B_OBJS)
	@printf "compiling $(B_NAME)\n"
	@$(CC) $(B_OBJS) $(LIBS) $(INC) -o $(B_NAME)

obj/%_bonus.o: bonus/%_bonus.c
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@ && printf "compiling $(notdir $<)\n"

obj/%.o: src/%.c
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@ && printf "compiling $(notdir $<)\n"

clean:
	@rm -rf ./obj && printf "removing obj files\n"
	@make --silent -C $(LIBFT_DIR) fclean

fclean: clean
	@rm -f $(NAME) $(B_NAME) && printf "removing $(NAME)\n"

re: fclean all

.PHONY: all, clean, fclean, re, libft, obj
