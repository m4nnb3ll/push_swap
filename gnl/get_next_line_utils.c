/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:48:28 by abelayad          #+#    #+#             */
/*   Updated: 2022/12/25 14:34:41 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	total_length;

	if (!s1 || !s2)
		return (NULL);
	total_length = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = (char *)malloc(total_length * sizeof(char));
	if (!joined)
		return (NULL);
	while (*s1)
		*joined++ = *s1++;
	while (*s2)
		*joined++ = *s2++;
	*joined = 0;
	return (joined - (total_length - 1));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	alloc_len;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strjoin("", ""));
	alloc_len = len;
	if (len >= slen)
		alloc_len = slen;
	substr = malloc((alloc_len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (len-- && s[start])
		substr[i++] = s[start++];
	substr[i] = 0;
	return (substr);
}
