/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:58:31 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:36:09 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_show_err(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	ft_check_error(char	**args, t_stack *stk_a)
{
	if (ft_not_ints(args) || ft_args_too_big(args))
	{
		ft_free2(args);
		ft_show_err();
	}
	ft_get_int_arr(args, stk_a);
	if (ft_duplicated_ints(*stk_a))
	{
		free(stk_a->arr);
		ft_show_err();
	}
}
