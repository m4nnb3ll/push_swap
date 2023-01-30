/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_not_ints.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:12:26 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/11 18:18:25 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ft_not_ints(char **args)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (args[i])
	{
		if (!ft_strlen(args[i]))
			ft_show_err();
		j = 0;
		if ((args[i][j] == '-' || args[i][j] == '+') && args[i][j + 1])
			j++;
		while (args[i][j])
		{
			if (args[i][j] < '0' || args[i][j] > '9')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
