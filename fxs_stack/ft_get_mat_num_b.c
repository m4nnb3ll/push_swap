/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_mat_num_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:05:08 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/14 23:30:37 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_matnum	ft_get_mat_num_b(t_stack stk, int num)
{
	size_t		i;
	t_matnum	matnum;
	t_stknum	min;
	t_stknum	max;

	min = ft_get_min(stk);
	max = ft_get_max(stk);
	if (num > max.num || num < min.num)
		return ((t_matnum){ft_get_max(stk), 1});
	matnum = (t_matnum){(t_stknum){0, stk.arr[0]}, 0};
	i = 0;
	while (i < stk.len)
	{
		if ((!matnum.found && stk.arr[i] < num)
			|| (matnum.stknum.num < stk.arr[i] && stk.arr[i] < num))
			matnum = (t_matnum){(t_stknum){i, stk.arr[i]}, 1};
		++i;
	}
	return (matnum);
}
