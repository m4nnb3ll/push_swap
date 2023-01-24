/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:37:23 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/21 23:58:22 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n)
	{
		while (*s1 && *s2 && *s1 == *s2 && n - 1)
		{
			s1++;
			s2++;
			n--;
		}
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}
