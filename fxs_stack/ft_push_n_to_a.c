/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_n_to_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:29:20 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:33:32 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_push_n_to_a(t_stack *stk_a, t_stack *stk_b, t_stknum num)
{
	t_matnum	matnum;
	char		*a_instructs;
	char		*b_instructs;
	char		*total_instructs;
	char		*tofree;

	b_instructs = ft_rot_to_num(stk_b, num, 'b', 1);
	matnum = ft_get_mat_num_a(*stk_a, num.num);
	a_instructs = ft_rot_to_num(stk_a, matnum.stknum, 'a', 1);
	total_instructs = ft_join_instructs(a_instructs, b_instructs);
	free(b_instructs);
	tofree = total_instructs;
	total_instructs = ft_reduce_instructs(total_instructs);
	if (total_instructs != tofree)
		free(tofree);
	ft_putstr(total_instructs);
	free(total_instructs);
	ft_push(stk_a, stk_b, "pa\n");
}
