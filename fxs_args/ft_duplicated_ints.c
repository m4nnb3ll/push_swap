/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicated_ints.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:12:34 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/11 18:20:39 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ft_duplicated_ints(t_stack stk)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < stk.len)
	{
		j = 1;
		while (j + i < stk.len)
			if (stk.arr[i] == stk.arr[i + j++])
				return (1);
		i++;
	}
	return (0);
}
