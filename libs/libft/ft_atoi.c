/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:32:07 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/22 23:23:47 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c != '\t' && c != '\n' && c != '\v' \
		&& c != '\f' && c != '\r' && c != ' ')
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	sum;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	sum = 0;
	i = 1;
	while (ft_isdigit(*str))
	{
		sum = sum * 10 + (*str - '0');
		if (sum < 0)
		{
			if (sign != -1)
				return (-1);
			return (0);
		}
		str++;
	}
	return (sum * sign);
}
