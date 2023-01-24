/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_a_somehow_sorted.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:50:56 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:34:58 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ft_stk_a_somehow_sorted(t_stack *stk)
{
	if (ft_stk_sorted(*stk) || !stk->len || ft_stk_needs_rot(stk))
		return (1);
	return (0);
}
