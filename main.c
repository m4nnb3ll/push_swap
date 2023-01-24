/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:05:57 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:35:49 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stk_a;
	t_stack	stk_b;
	char	**args;

	if (argc == 1)
		exit(1);
	if (argc > 2)
		args = ft_get_stack_from_args(argc, argv);
	else
		args = ft_split(argv[1], ' ');
	ft_check_error(args, &stk_a);
	if (!ft_stk_sorted(stk_a))
		ft_push_swap(&stk_a, &stk_b);
	free(stk_a.arr);
	return (0);
}
