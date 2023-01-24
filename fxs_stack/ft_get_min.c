/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:13:31 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/12 19:44:07 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_stknum	ft_get_min(t_stack stk)
{
	size_t		i;
	t_stknum	min;

	min = (t_stknum){0, stk.arr[0]};
	i = 1;
	while (i < stk.len)
	{
		if (stk.arr[i] < min.num)
			min = (t_stknum){i, stk.arr[i]};
		i++;
	}
	return (min);
}
