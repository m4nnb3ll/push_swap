/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:54:07 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:17:55 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_pop(t_stack *stk)
{
	int		*tofree;
	size_t	stk_len;

	tofree = stk->arr;
	stk->arr = (int *)malloc(sizeof(int) * (stk->len-- - 1));
	stk_len = stk->len;
	while (stk_len--)
		stk->arr[stk_len] = tofree[stk_len + 1];
	free(tofree);
	if (!stk->len)
		free(stk->arr);
}
