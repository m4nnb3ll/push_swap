/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:45:18 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/22 00:45:19 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*substr_strt;
	size_t	slen;
	size_t	alloc_len;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	alloc_len = len;
	if (len >= slen)
		alloc_len = slen;
	substr = ft_calloc((alloc_len + 1), sizeof(char));
	if (!substr)
		return (NULL);
	substr_strt = substr;
	while (len-- && *(s + start))
		*substr++ = *(s + start++);
	return (substr_strt);
}
