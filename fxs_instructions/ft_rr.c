/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:49:03 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/12 19:39:15 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_rr(t_stack *stk_a, t_stack *stk_b, int instruct)
{
	if (instruct)
	{
		ft_rotate(stk_a, 'a');
		ft_rotate(stk_b, 'b');
	}
	else
	{
		ft_rotate(stk_a, 0);
		ft_rotate(stk_b, 0);
	}
}
