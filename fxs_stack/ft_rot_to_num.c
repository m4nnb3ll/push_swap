/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot_to_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:44:25 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:37:24 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

char	*ft_rot_to_num(t_stack *stk, t_stknum num, char stack, int ret)
{
	char	*instructs;

	instructs = ft_strdup("");
	if (num.i <= ((stk->len - 1) / 2))
	{
		while (stk->arr[0] != num.num)
			instructs = ft_join_instructs(instructs, ft_rotate(stk, stack));
	}
	else
		while (stk->arr[0] != num.num)
			instructs = \
			ft_join_instructs(instructs, ft_reverse_rotate(stk, stack));
	if (ret)
		return (instructs);
	free(instructs);
	return (0);
}
