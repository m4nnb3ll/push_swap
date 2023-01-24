/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:45:11 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/23 00:37:57 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_matchset(char c, char const *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

static char	*ft_trimmer(char const *s1, char const *set)
{	
	const char	*first_stop;
	char		*trimmed;
	size_t		i;
	size_t		total_size;

	total_size = ft_strlen(s1) + 1;
	i = 0;
	while (*s1 && ft_matchset(*s1, set) && ++i)
		s1++;
	first_stop = s1;
	while (*s1)
		s1++;
	while (--s1 >= first_stop && ft_matchset(*s1, set))
		++i;
	total_size -= i;
	trimmed = ft_calloc(total_size, sizeof(char));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (total_size-- - 1 && ++i)
		*trimmed++ = *first_stop++;
	*trimmed = 0;
	return (trimmed - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	if (!s1)
		return (NULL);
	if (!set)
		return (NULL);
	return (ft_trimmer(s1, set));
}
