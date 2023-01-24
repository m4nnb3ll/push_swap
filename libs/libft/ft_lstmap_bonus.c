/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:30:22 by abelayad          #+#    #+#             */
/*   Updated: 2022/10/22 00:30:23 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_handle_clr(t_list **head, void (*del)(void *))
{
	ft_lstclear(head, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*nlst;

	if (!lst || !f || !del)
		return (NULL);
	head = ft_lstnew(f(lst -> content));
	nlst = head;
	if (!nlst)
		ft_handle_clr(&head, del);
	lst = lst -> next;
	while (lst)
	{
		nlst -> next = ft_lstnew(f(lst -> content));
		nlst = nlst -> next;
		if (!nlst)
			ft_handle_clr(&head, del);
		lst = lst -> next;
	}
	nlst -> next = NULL;
	return (head);
}
