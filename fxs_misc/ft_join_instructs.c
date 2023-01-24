/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_instructs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:55:54 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/14 23:44:44 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

char	*ft_join_instructs(char *core, char *plus)
{
	char	*tofree;

	tofree = core;
	core = ft_strjoin(core, plus);
	free(tofree);
	return (core);
}
