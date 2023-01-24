/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_counter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:38:47 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:07:03 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

size_t	ft_args_counter(char **args)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (args[i])
	{
		++i;
		++count;
	}
	return (count);
}
