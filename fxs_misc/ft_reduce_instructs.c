/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reduce_instructs.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:46:44 by abelayad          #+#    #+#             */
/*   Updated: 2023/01/16 19:40:00 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

t_instructs_count	ft_count_instructs(char *instructs)
{
	size_t				i;
	char				**split_instructs;
	t_instructs_count	instructs_count;

	instructs_count = (t_instructs_count){0, 0, 0, 0};
	split_instructs = ft_split(instructs, '\n');
	i = 0;
	while (split_instructs[i])
	{
		if (!ft_strncmp(split_instructs[i], "ra", 2))
			++instructs_count.ra;
		else if (!ft_strncmp(split_instructs[i], "rb", 2))
			++instructs_count.rb;
		else if (!ft_strncmp(split_instructs[i], "rra", 3))
			++instructs_count.rra;
		else if (!ft_strncmp(split_instructs[i], "rrb", 3))
			++instructs_count.rrb;
		i++;
	}
	ft_free2(split_instructs);
	return (instructs_count);
}

char	*ft_get_rotation_instructs(t_instructs_count instructs_count)
{
	char				*ret_instructs;

	ret_instructs = ft_strdup("");
	while (instructs_count.ra && instructs_count.rb)
	{
		ret_instructs = ft_join_instructs(ret_instructs, "rr\n");
		instructs_count.ra--;
		instructs_count.rb--;
	}
	while (instructs_count.ra)
	{
		ret_instructs = ft_join_instructs(ret_instructs, "ra\n");
		instructs_count.ra--;
	}
	while (instructs_count.rb)
	{
		ret_instructs = ft_join_instructs(ret_instructs, "rb\n");
		instructs_count.rb--;
	}
	return (ret_instructs);
}

char	*ft_get_reverse_rotation_instructs(t_instructs_count instructs_count)
{
	char				*ret_instructs;

	ret_instructs = ft_strdup("");
	while (instructs_count.rra && instructs_count.rrb)
	{
		ret_instructs = ft_join_instructs(ret_instructs, "rrr\n");
		instructs_count.rra--;
		instructs_count.rrb--;
	}
	while (instructs_count.rra)
	{
		ret_instructs = ft_join_instructs(ret_instructs, "rra\n");
		instructs_count.rra--;
	}
	while (instructs_count.rrb)
	{
		ret_instructs = ft_join_instructs(ret_instructs, "rrb\n");
		instructs_count.rrb--;
	}
	return (ret_instructs);
}

char	*ft_reduce_instructs(char *instructs)
{
	t_instructs_count	instructs_count;

	instructs_count = ft_count_instructs(instructs);
	if ((instructs_count.ra && instructs_count.rb)
		|| (instructs_count.rra && instructs_count.rrb))
	{
		if (instructs_count.ra || instructs_count.rb)
			return (ft_get_rotation_instructs(instructs_count));
		else if (instructs_count.rra || instructs_count.rrb)
			return (ft_get_reverse_rotation_instructs(instructs_count));
	}
	return (instructs);
}
