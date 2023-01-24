/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_too_big.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:17:09 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/11 18:19:00 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ft_isspace(int c)
{
	if (c != '\t' && c != '\n' && c != '\v' \
		&& c != '\f' && c != '\r' && c != ' ')
		return (0);
	return (1);
}

long int	ft_atoli(const char *str)
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

int	ft_arg_too_big(char *arg)
{
	int			neg;
	long int	num;

	neg = 0;
	if (*arg == '-' && ++neg)
		arg++;
	if (ft_strlen(arg) > 10)
		return (1);
	num = ft_atoli(arg - neg);
	if (num < INT_MIN || num > INT_MAX)
		return (1);
	return (0);
}

/* THE FUNCTION BELOW IS "args" WITH 's'*/
int	ft_args_too_big(char **args)
{
	while (*args)
		if (ft_arg_too_big(*args++))
			return (1);
	return (0);
}
