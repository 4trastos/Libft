/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:31:48 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/29 17:33:32 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		i;
	t_list	*temp_lst;
	t_list	*plst;
	t_list	*plst_head;

	i = 0;
	temp_lst = lst;
	plst_head = 0;
	plst = 0;
	if (lst == (void *)0)
		return (0);
	while (temp_lst != (void *)0)
	{
		plst = ft_lstnew((temp_lst->content));
		if (plst == 0)
		{
			ft_lstclear(&plst_head, del);
			return (0);
		}
		plst->content = f(temp_lst->content);
		ft_lstadd_back(&plst_head, plst);
		temp_lst = temp_lst->next;
		i++;
	}
	return (plst_head);
}
