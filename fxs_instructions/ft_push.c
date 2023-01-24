/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:45:08 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:36:25 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_push(t_stack *dest, t_stack *src, char *instruct)
{
	int		*tofree;
	size_t	dest_len;

	if (!src->len)
		return ;
	tofree = dest->arr;
	dest_len = dest->len;
	dest->arr = (int *)malloc(sizeof(int) * (dest->len++ + 1));
	dest->arr[0] = src->arr[0];
	if (dest_len)
		while (dest_len--)
			dest->arr[dest_len + 1] = tofree[dest_len];
	free(tofree);
	ft_pop(src);
	if (instruct)
		ft_printf("%s", instruct);
}
