/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:22:55 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/06 22:29:29 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	if ((!dst || !src) && !dstsize)
	{
		if (dst)
			return (ft_strlen(dst));
		else
			return (ft_strlen(src));
	}
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (*dst)
	{
		dst++;
		dstsize--;
	}
	while (*src && (dstsize-- - 1) > 0)
		*dst++ = *src++;
	*dst = 0;
	return (dst_len + src_len);
}
