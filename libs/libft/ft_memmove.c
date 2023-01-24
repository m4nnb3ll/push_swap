/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:30:15 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/08 13:30:22 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void			*odst;

	odst = dst;
	if (dst - src > 0)
	{
		dst += len - 1;
		src += len - 1;
		while (len--)
			*(unsigned char *)dst-- = *(unsigned char *)src--;
		return ((void *)odst);
	}
	return (ft_memcpy(dst, src, len));
}
