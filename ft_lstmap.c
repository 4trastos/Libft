/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:31:48 by davgalle          #+#    #+#             */
/*   Updated: 2023/10/05 17:23:28 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		i;
	t_list	*plst;
	t_list	*plst_head;

	i = 0;
	plst_head = 0;
	plst = 0;
	while (lst != (void *)0)
	{
		plst = ft_lstnew((lst->content));
		if (plst == 0)
		{
			ft_lstclear(&plst_head, del);
			return (0);
		}
		plst->content = f(lst->content);
		ft_lstadd_back(&plst_head, plst);
		lst = lst->next;
		i++;
	}
	return (plst_head);
}
