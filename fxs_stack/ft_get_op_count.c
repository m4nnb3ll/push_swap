/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_op_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:55:09 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:33:21 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

size_t	ft_get_op_count(t_oc_args op_count_args)
{
	t_stack		stk_a;
	t_stack		stk_b;
	t_stknum	num;
	t_stknum	matnum;

	stk_a = op_count_args.stk_a;
	stk_b = op_count_args.stk_b;
	num = op_count_args.num;
	matnum = op_count_args.matnum;
	if ((num.i <= (stk_a.len) / 2) && (matnum.i <= (stk_b.len) / 2))
		return (ft_get_max_of_two(num.i, matnum.i));
	if ((num.i > (stk_a.len) / 2) && (matnum.i > (stk_b.len) / 2))
		return (ft_get_max_of_two(stk_a.len - num.i, stk_b.len - matnum.i));
	if ((num.i <= (stk_a.len) / 2) && (matnum.i > (stk_b.len) / 2))
		return (num.i + (stk_b.len - matnum.i));
	return ((int)(stk_a.len - num.i + matnum.i));
}
