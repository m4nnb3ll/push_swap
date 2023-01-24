/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:46:22 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/13 22:26:41 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

char	*ft_reverse_rotate(t_stack *stk, char stack)
{
	int		tmp;
	size_t	arr_len;

	if (!stk->len)
		return (0);
	arr_len = stk->len;
	tmp = stk->arr[stk->len - 1];
	while (arr_len-- - 1)
		stk->arr[arr_len] = stk->arr[arr_len - 1];
	stk->arr[0] = tmp;
	if (stack == 'a')
		return ("rra\n");
	return ("rrb\n");
}
