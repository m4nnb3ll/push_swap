/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:54:40 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:38:08 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"
# include <limits.h>

// New Types & Structures
typedef struct s_stack
{
	int		*arr;
	size_t	len;
}	t_stack;

typedef struct s_stknum
{
	size_t	i;
	int		num;
}	t_stknum;

typedef struct s_matnum
{
	t_stknum	stknum;
	int			found;
}	t_matnum;

typedef struct s_opcount
{
	size_t	old;
	size_t	new;
}	t_opcount;

typedef struct s_op_count_args
{
	t_stack		stk_a;
	t_stack		stk_b;
	t_stknum	num;
	t_stknum	matnum;
}	t_oc_args;

typedef struct s_instructs_count
{
	size_t	ra;
	size_t	rb;
	size_t	rra;
	size_t	rrb;
}	t_instructs_count;

// Args functions
size_t		ft_args_counter(char **args);
void		ft_check_error(char	**args, t_stack *stk_a);
void		ft_get_int_arr(char **args, t_stack *stk);
char		**ft_get_stack_from_args(int argc, char **argv);
int			ft_not_ints(char **args);
int			ft_args_too_big(char **args);
int			ft_duplicated_ints(t_stack stk);

// Instructions & Their helpers
void		ft_swap(t_stack *stk, char *instruct);
void		ft_ss(t_stack *stk_a, t_stack *stk_b, int instruct);
void		ft_push(t_stack *dest, t_stack *src, char *instruct);
void		ft_pop(t_stack *stk);
char		*ft_rotate(t_stack *stk, char stack);
void		ft_rr(t_stack *stk_a, t_stack *stk_b, int instruct);
char		*ft_reverse_rotate(t_stack *stk, char stack);
void		ft_rrr(t_stack *stk_a, t_stack *stk_b, int instruct);

// Stack Functions
t_stknum	ft_get_chosen_one_of_a(t_stack *stk_a, t_stack *stk_b);
t_stknum	ft_get_chosen_one_of_b(t_stack *stk_a, t_stack *stk_b);
t_matnum	ft_get_mat_num_a(t_stack stk, int num);
t_matnum	ft_get_mat_num_b(t_stack stk, int num);
t_stknum	ft_get_min(t_stack stk);
t_stknum	ft_get_max(t_stack stk);
size_t		ft_get_op_count(t_oc_args op_count_args);
void		ft_hanle_push_back(t_stack *stk_a, t_stack *stk_b);
void		ft_push_n_to_a(t_stack *stk_a, t_stack *stk_b, t_stknum num);
void		ft_push_n_to_b(t_stack *stk_a, t_stack *stk_b, t_stknum num);
void		ft_rot_to_max(t_stack *stk, int instruct);
void		ft_rot_to_min(t_stack *stk, int instruct);
char		*ft_rot_to_num(t_stack *stk, t_stknum num, char stack, int ret);
void		ft_sort_stk_of_3(t_stack *stk);
int			ft_stk_a_somehow_sorted(t_stack *stk);
int			ft_stk_needs_rot(t_stack *stk);
int			ft_stk_sorted(t_stack stk);
t_stack		ft_stkcpy(t_stack stk);

// Push Swap Function
void		ft_push_swap(t_stack *stk_a, t_stack *stk_b);

// Miscellaneous
int			ft_get_max_of_two(int a, int b);
char		*ft_join_instructs(char *core, char *plus);
char		*ft_reduce_instructs(char *instructs);
void		ft_free2(char	**str); // free an array of strings

#endif