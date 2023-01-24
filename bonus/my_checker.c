/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 13:45:52 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 19:39:41 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

/*
ATTENTION BELOW
I have to start with the 3 char instructions first as not
to make confusion with the 2 char ones, example:
rr gets processed before rra, rrb and rrr
*/

void	ft_instruct_runner(t_stack *stk_a, t_stack *stk_b, char *instruct)
{
	if (!ft_strncmp(instruct, "rra", 3))
		ft_reverse_rotate(stk_a, 0);
	else if (!ft_strncmp(instruct, "rrb", 3))
		ft_reverse_rotate(stk_b, 0);
	else if (!ft_strncmp(instruct, "rrr", 3))
		ft_rrr(stk_a, stk_b, 0);
	else if (!ft_strncmp(instruct, "sa", 2))
		ft_swap(stk_a, 0);
	else if (!ft_strncmp(instruct, "sb", 2))
		ft_swap(stk_b, 0);
	else if (!ft_strncmp(instruct, "ss", 2))
		ft_ss(stk_a, stk_b, 0);
	else if (!ft_strncmp(instruct, "pa", 2))
		ft_push(stk_a, stk_b, 0);
	else if (!ft_strncmp(instruct, "pb", 2))
		ft_push(stk_b, stk_a, 0);
	else if (!ft_strncmp(instruct, "ra", 2))
		ft_rotate(stk_a, 0);
	else if (!ft_strncmp(instruct, "rb", 2))
		ft_rotate(stk_b, 0);
	else if (!ft_strncmp(instruct, "rr", 2))
		ft_rr(stk_a, stk_b, 0);
}

/* 'valid' below is not using a tab
because that would alter the string thus the output*/

int	ft_is_valid_instruct(char *instruct)
{
	char	**valid;
	size_t	i;

	i = 0;
	if (ft_strlen(instruct) > 4)
		return (0);
	valid = ft_split("sa\n sb\n ss\n pa\n pb\n \
ra\n rb\n rr\n rra\n rrb\n rrr\n", ' ');
	while (valid[i])
	{
		if (!ft_strncmp(valid[i], instruct, ft_strlen(valid[i])))
		{
			ft_free2(valid);
			return (1);
		}
		i++;
	}
	ft_free2(valid);
	return (0);
}

void	ft_check(t_stack *stk_a, t_stack *stk_b)
{
	char	*instruct;

	instruct = get_next_line(0);
	while (instruct)
	{
		if (!ft_is_valid_instruct(instruct))
		{
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		ft_instruct_runner(stk_a, stk_b, instruct);
		instruct = get_next_line(0);
	}
	if (ft_stk_sorted(*stk_a) && !stk_b->len)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

int	main(int argc, char **argv)
{
	t_stack	stk_a;
	t_stack	stk_b;
	char	**args;

	if (argc == 1)
		exit(1);
	if (argc > 2)
	{
		args = (char **)malloc(sizeof(char *) * argc);
		args[argc-- - 1] = 0;
		while (argc--)
			args[argc] = ft_strdup(argv[argc + 1]);
	}
	else
		args = ft_split(argv[1], ' ');
	if (ft_not_ints(args) || ft_args_too_big(args))
		ft_show_err();
	ft_get_int_arr(args, &stk_a);
	if (ft_duplicated_ints(stk_a))
		ft_show_err();
	stk_b.len = 0;
	ft_check(&stk_a, &stk_b);
	return (0);
}

/* I WILL CHECK THE CHECKER LATER FOR LEAKS*/