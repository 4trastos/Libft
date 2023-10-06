/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:31:48 by davgalle          #+#    #+#             */
/*   Updated: 2023/10/06 17:35:39 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*newnode;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		newnode = ft_lstnew(lst->content);
		if (!newnode)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		newnode->content = f(lst->content);
		ft_lstadd_back(&new_lst, newnode);
		lst = lst->next;
	}
	return (new_lst);
}
