/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:51:17 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/29 16:14:17 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (*lst == (void *)0)
	{
		*lst = new;
	}
	else
	{
		aux = *lst;
		while (aux->next != (void *)0)
			aux = aux->next;
		aux->next = new;
	}
}
