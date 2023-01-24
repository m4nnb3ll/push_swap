/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_int_arr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:40:15 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:31:07 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_get_int_arr(char **args, t_stack *stk)
{
	size_t	arr_size;

	arr_size = ft_args_counter(args);
	stk -> len = arr_size;
	stk -> arr = (int *)malloc(sizeof(int) * arr_size);
	while (arr_size--)
		stk -> arr[arr_size] = ft_atoi(args[arr_size]);
	ft_free2(args);
}
