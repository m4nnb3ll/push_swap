/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_needs_rot.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:54:05 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:35:12 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ft_stk_needs_rot(t_stack *stk)
{
	t_stack	tmp;

	tmp = ft_stkcpy(*stk);
	ft_rot_to_min(&tmp, 0);
	if (ft_stk_sorted(tmp))
	{
		free(tmp.arr);
		return (1);
	}
	free(tmp.arr);
	return (0);
}
