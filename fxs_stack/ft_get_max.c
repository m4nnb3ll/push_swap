/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:14:32 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/14 23:15:01 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_stknum	ft_get_max(t_stack stk)
{
	size_t		i;
	t_stknum	max;

	max = (t_stknum){0, stk.arr[0]};
	i = 1;
	while (i < stk.len)
	{
		if (stk.arr[i] > max.num)
			max = (t_stknum){i, stk.arr[i]};
		i++;
	}
	return (max);
}
