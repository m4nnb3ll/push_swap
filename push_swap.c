/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:46:03 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/15 23:01:15 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/push_swap.h"

/*
line 30:
here i would end up with stack_a, either sorted, or needs rotation or empty
in all cases i would choose the best of b and push it back to a
*/

void	ft_push_swap(t_stack *stk_a, t_stack *stk_b)
{
	t_stknum	chosen_one;

	stk_b->len = 0;
	if (stk_a->len > 3)
	{
		ft_push(stk_b, stk_a, "pb\n");
		ft_push(stk_b, stk_a, "pb\n");
		while (!(ft_stk_a_somehow_sorted(stk_a) || stk_a->len == 3))
		{
			chosen_one = ft_get_chosen_one_of_a(stk_a, stk_b);
			ft_push_n_to_b(stk_a, stk_b, chosen_one);
		}
	}
	if (!ft_stk_a_somehow_sorted(stk_a) && stk_a->len == 3)
		ft_sort_stk_of_3(stk_a);
	ft_hanle_push_back(stk_a, stk_b);
	if (!ft_stk_sorted(*stk_a))
		ft_rot_to_min(stk_a, 1);
}
