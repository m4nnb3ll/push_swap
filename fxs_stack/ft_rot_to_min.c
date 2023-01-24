/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot_to_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:21:03 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:33:54 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_rot_to_min(t_stack *stk, int instruct)
{
	t_stknum	min;
	char		*instructs;

	instructs = NULL;
	min = ft_get_min(*stk);
	if (instruct)
	{
		instructs = ft_rot_to_num(stk, min, 'a', 1);
		if (instructs)
		{
			ft_putstr(instructs);
			free(instructs);
		}
	}
	else
		ft_rot_to_num(stk, min, 'a', 0);
}
