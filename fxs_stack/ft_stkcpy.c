/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:02:37 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:37:44 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_stack	ft_stkcpy(t_stack stk)
{
	int		*arr_cpy;
	size_t	i;

	arr_cpy = (int *)malloc(sizeof(int) * stk.len);
	i = 0;
	while (i < stk.len)
	{
		arr_cpy[i] = stk.arr[i];
		i++;
	}
	return ((t_stack){arr_cpy, stk.len});
}
