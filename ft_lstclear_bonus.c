/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:44:32 by davgalle          #+#    #+#             */
/*   Updated: 2023/10/06 19:15:18 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = *lst;
	while (temp)
	{
		del (temp->content);
		*lst = temp->next;
		free (temp);
		temp = *lst;
	}
	*lst = NULL;
}
/*
int main()
{
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    t_list *node3 = (t_list *)malloc(sizeof(t_list));

    node1->content = strdup("Nodo 1");
    node1->next = node2;
    node2->content = strdup("Nodo 2");
    node2->next = node3;
    node3->content = strdup("Nodo 3");
    node3->next = NULL;

     ft_lstclear(&node1, custom_free);

    if (node1 == NULL && node2 == NULL && node3 == NULL)
    {
        printf("Todos los nodos han sido eliminados correctamente.\n");
    }
    else
    {
        printf("Error al eliminar los nodos.\n");
    }
    return 0;
}*/
