/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:42:34 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/14 17:35:57 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ft_stk_sorted(t_stack stk)
{
	size_t	i;

	i = 0;
	while (i < stk.len - 1)
	{
		if (stk.arr[i] > stk.arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}
