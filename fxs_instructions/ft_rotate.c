/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:45:51 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/13 22:26:49 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

char	*ft_rotate(t_stack *stk, char stack)
{
	int		tmp;
	size_t	i;

	if (!stk->len)
		return (0);
	i = 0;
	tmp = stk->arr[0];
	while (i < stk->len - 1)
	{
		stk->arr[i] = stk->arr[i + 1];
		i++;
	}
	stk->arr[stk->len - 1] = tmp;
	if (stack == 'a')
		return ("ra\n");
	return ("rb\n");
}
