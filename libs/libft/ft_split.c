/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:05:06 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/23 00:34:14 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c && ++count)
			while (*s && *s != c)
				++s;
		while (*s && *s == c)
			++s;
	}
	return (count);
}

static char	**ft_allocater(char const *s, char c, char **strs)
{
	size_t	count;
	char	**ostrs;

	ostrs = strs;
	while (*s)
	{
		count = 0;
		if (*s != c)
		{
			while (*s && *s != c && ++count)
				++s;
			*strs = ft_calloc(count + 1, sizeof(char));
			if (!*strs)
				return (NULL);
			strs++;
		}
		while (*s && *s == c)
			++s;
	}
	return (ostrs);
}

static char	**ft_filler(char const *s, char c, char **strs)
{
	size_t	count;
	char	**ostrs;

	ostrs = strs;
	while (*s && *strs)
	{
		if (*s != c)
		{
			count = 0;
			while (*s && *s != c && ++count)
				*((*strs)++) = *s++;
			*strs -= count;
			strs++;
		}
		while (*s && *s == c)
			++s;
	}
	return (ostrs);
}

char	**ft_split(char const *s, char c)
{
	size_t		count;
	char		**strs;

	if (!s)
		return (NULL);
	count = ft_count(s, c);
	strs = ft_calloc(count + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	if (!count)
		return (strs);
	return (ft_filler(s, c, ft_allocater(s, c, strs)));
}
