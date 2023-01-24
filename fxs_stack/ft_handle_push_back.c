/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_push_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:53:58 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:36:53 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_hanle_push_back(t_stack *stk_a, t_stack *stk_b)
{
	t_stknum	max;

	while (stk_b->len)
	{
		max = ft_get_max(*stk_b);
		ft_push_n_to_a(stk_a, stk_b, max);
	}
}
