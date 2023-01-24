/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:45:39 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/07 19:33:26 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*tmp_src;

	if (dstsize)
	{
		tmp_src = src;
		while ((dstsize-- - 1) && *tmp_src)
			*dst++ = *tmp_src++;
		*dst = 0;
	}
	return (ft_strlen(src));
}
