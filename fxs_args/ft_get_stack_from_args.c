/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_stack_from_args.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:18:29 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 21:36:15 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

char	**ft_get_stack_from_args(int argc, char **argv)
{
	char	**args;

	args = (char **)malloc(sizeof(char *) * argc);
	args[argc-- - 1] = 0;
	while (argc--)
		args[argc] = ft_strdup(argv[argc + 1]);
	return (args);
}
