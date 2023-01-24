/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:04:32 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/22 00:42:06 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cmp(const char *s1, const char *s2, size_t len)
{
	while (len && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		len--;
	}
	if (!*s2)
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if ((!haystack || !needle) && !len)
		return (NULL);
	if (!ft_strlen(needle))
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (*haystack == *needle)
			if (ft_cmp(haystack, needle, len))
				return ((char *)haystack);
		len--;
		haystack++;
	}
	return (NULL);
}
