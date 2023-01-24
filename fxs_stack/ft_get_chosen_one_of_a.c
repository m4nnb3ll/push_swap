/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_chosen_one_of_a.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:02:01 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/15 23:03:38 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_stknum	ft_get_chosen_one_of_a(t_stack *stk_a, t_stack *stk_b)
{
	t_stknum		chosen_one;
	t_matnum		matnum;
	t_opcount		opcount;
	size_t			i;
	t_oc_args		oc_args;

	chosen_one = (t_stknum){0, stk_a->arr[0]};
	matnum = ft_get_mat_num_b(*stk_b, chosen_one.num);
	oc_args = (t_oc_args){(*stk_a), (*stk_b), chosen_one, matnum.stknum};
	opcount.old = ft_get_op_count(oc_args);
	i = 1;
	while (i < stk_a->len)
	{
		matnum = ft_get_mat_num_b(*stk_b, stk_a->arr[i]);
		oc_args.num = (t_stknum){i, stk_a->arr[i]};
		oc_args.matnum = matnum.stknum;
		opcount.new = ft_get_op_count(oc_args);
		if (opcount.new < opcount.old)
		{
			chosen_one = (t_stknum){i, stk_a->arr[i]};
			opcount.old = opcount.new;
		}
		i++;
	}
	return (chosen_one);
}
