/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:44:32 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/29 17:22:55 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = *lst;
	if (*lst == (void *)0)
		return ;
	while (temp != (void *)0)
	{
		del (temp->content);
		*lst = temp->next;
		free (temp);
		temp = *lst;
	}
	lst = (void *)0;
}
