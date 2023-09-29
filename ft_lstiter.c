/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:23:59 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/29 17:29:46 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*aux;

	if (lst == (void *)0)
		return ;
	aux = lst;
	while (aux->next != (void *)0)
	{
		f(aux->content);
		aux = aux->next;
	}
	f(aux->content);
}
