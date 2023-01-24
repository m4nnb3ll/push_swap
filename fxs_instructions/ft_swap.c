/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:44:23 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/11 17:44:33 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_swap(t_stack *stk, char *instruct)
{
	int	tmp;

	if (stk->len <= 1)
		return ;
	tmp = stk->arr[0];
	stk->arr[0] = stk->arr[1];
	stk->arr[1] = tmp;
	if (instruct)
		ft_printf("%s", instruct);
}
