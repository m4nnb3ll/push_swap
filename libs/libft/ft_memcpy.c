/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:27:44 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/08 13:28:27 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*odst;

	odst = dst;
	while ((dst || src) && n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return ((void *)odst);
}
