/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:48:24 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:36:39 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_ss(t_stack *stk_a, t_stack *stk_b, int instruct)
{
	if (instruct)
	{
		ft_swap(stk_a, "sa\n");
		ft_swap(stk_b, "sb\n");
	}
	else
	{
		ft_swap(stk_a, 0);
		ft_swap(stk_b, 0);
	}
}
