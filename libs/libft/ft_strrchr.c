/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:45:15 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/22 23:52:12 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*os;

	if (!(char)c)
		return ((char *)(s + ft_strlen(s)));
	os = s;
	while (*s)
		s++;
	while (s >= os)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
