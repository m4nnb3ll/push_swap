/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:26:23 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/08 13:31:22 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*ob;
	size_t	i;

	ob = b;
	i = 0;
	while (++i <= len)
		*(unsigned char *)b++ = (unsigned char)c;
	return ((void *)ob);
}
