/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot_to_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 19:50:15 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:37:11 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_rot_to_max(t_stack *stk, int instruct)
{
	t_stknum	max;
	char		*instructs;

	instructs = NULL;
	max = ft_get_max(*stk);
	if (instruct)
	{
		instructs = ft_rot_to_num(stk, max, 'b', 1);
		if (instructs)
		{
			ft_putstr(instructs);
			free(instructs);
		}
	}
	else
		ft_rot_to_num(stk, max, 'b', 0);
}
