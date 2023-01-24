/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_chosen_one_of_b.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:57:07 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:33:04 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_stknum	ft_get_chosen_one_of_b(t_stack *stk_a, t_stack *stk_b)
{
	t_stknum		chosen_one;
	t_matnum		matnum;
	t_opcount		opcount;
	size_t			i;
	t_oc_args		oc_args;

	chosen_one = (t_stknum){0, stk_b->arr[0]};
	matnum = ft_get_mat_num_a(*stk_a, chosen_one.num);
	oc_args = (t_oc_args){(*stk_a), (*stk_b), matnum.stknum, chosen_one};
	opcount.old = ft_get_op_count(oc_args);
	i = 1;
	while (i < stk_b->len)
	{
		matnum = ft_get_mat_num_a(*stk_a, stk_b->arr[i]);
		oc_args.num = (t_stknum){i, stk_b->arr[i]};
		oc_args.matnum = matnum.stknum;
		opcount.new = ft_get_op_count(oc_args);
		if (opcount.new < opcount.old)
			chosen_one = (t_stknum){i, stk_b->arr[i]};
		i++;
	}
	return (chosen_one);
}
