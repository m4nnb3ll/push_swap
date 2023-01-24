/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:26:02 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 19:26:30 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_free2(char	**str)
{
	size_t	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str[i]);
	free(str);
}

//This function frees an array of strings allocated