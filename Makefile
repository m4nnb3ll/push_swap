NAME = push_swap
BONUS = checker
LIBDIR = libs
LIBFT = $(LIBDIR)/libft
LIBFTPRINTF = $(LIBDIR)/ft_printf


CC = cc
CFLAGS = -Wall -Werror -Wextra

# ARGS FUNCTIONS
ARGS_FUNCTIONS = $(addprefix fxs_args/, ft_args_counter.c ft_args_too_big.c ft_check_error.c ft_duplicated_ints.c \
					ft_get_int_arr.c ft_get_stack_from_args.c ft_not_ints.c)

# INSTRUCTIONS
INSTRUCTIONS = $(addprefix fxs_instructions/, ft_pop.c ft_push.c ft_reverse_rotate.c ft_rotate.c \
				ft_rr.c ft_rrr.c ft_ss.c ft_swap.c)

# MISC FUNCTIONS
MISC_FUNCTIONS = $(addprefix fxs_misc/, ft_get_max_of_two.c ft_join_instructs.c ft_reduce_instructs.c ft_free2.c)

# STACK FUNCTIONS
STACK_FUNCTIONS = $(addprefix fxs_stack/, ft_get_chosen_one_of_a.c ft_get_chosen_one_of_b.c ft_get_mat_num_a.c \
					ft_get_mat_num_b.c ft_get_min.c ft_get_max.c ft_get_op_count.c ft_push_n_to_a.c ft_push_n_to_b.c \
					ft_rot_to_max.c ft_rot_to_min.c ft_rot_to_num.c ft_sort_stk_of_3.c ft_stk_a_somehow_sorted.c ft_stk_needs_rot.c \
					ft_stk_sorted.c ft_stkcpy.c ft_handle_push_back.c)

SRCS =	main.c push_swap.c $(INSTRUCTIONS) $(ARGS_FUNCTIONS) $(STACK_FUNCTIONS) $(MISC_FUNCTIONS)

BONUS_SRCS =	bonus/my_checker.c $(INSTRUCTIONS) $(ARGS_FUNCTIONS) $(STACK_FUNCTIONS) \
				$(MISC_FUNCTIONS) gnl/get_next_line.c gnl/get_next_line_utils.c \

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

$(NAME): $(OBJS) $(LIBS)
	make -C $(LIBFT)
	make -C $(LIBFTPRINTF)
	$(CC) $(CFLAGS) -o $(NAME) -L$(LIBFT) -lft -L$(LIBFTPRINTF) -lftprintf $(OBJS)

$(BONUS): $(BONUS_OBJS) $(LIBS)
	make -C $(LIBFT)
	make -C $(LIBFTPRINTF)
	$(CC) $(CFLAGS) -o $(BONUS) -L$(LIBFT) -lft -L$(LIBFTPRINTF) -lftprintf $(BONUS_OBJS)

all: $(NAME)

bonus: $(BONUS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME) $(BONUS)

re: fclean all

.PHONY: all clean fclean re
