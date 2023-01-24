/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stk_of_3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:12:17 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:34:52 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_sort_stk_of_3(t_stack *stk)
{
	if ((stk->arr[0] < stk->arr[2] && stk->arr[2] < stk->arr[1])
		|| (stk->arr[1] < stk->arr[0] && stk->arr[0] < stk->arr[2])
		|| (stk->arr[2] < stk->arr[1] && stk->arr[1] < stk->arr[0]))
		ft_swap(stk, "sa\n");
}
