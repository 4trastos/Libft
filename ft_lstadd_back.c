/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:51:17 by davgalle          #+#    #+#             */
/*   Updated: 2023/10/05 19:13:24 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!*lst)
	{
		*lst = new;
		new->next = NULL;
	}
	else
	{
		aux = *lst;
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
}
/*
int main()
{
    // Crear una lista enlazada vacía
    t_list *list = NULL;

    // Crear un nuevo nodo con contenido "Nodo 1"
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    node1->content = "Nodo 1";
    node1->next = NULL;

    // Agregar el nodo1 al final de la lista
    ft_lstadd_back(&list, node1);

    // Crear otro nuevo nodo con contenido "Nodo 2"
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    node2->content = "Nodo 2";
    node2->next = NULL;

    // Agregar el nodo2 al final de la lista
    ft_lstadd_back(&list, node2);

    // Imprimir los elementos de la lista
    t_list *current = list;
    while (current != NULL)
    {
        printf("Contenido del nodo: %s\n", (char *)current->content);
        current = current->next;
    }

    // Limpieza de memoria
    while (list != NULL)
    {
        t_list *temp = list;
        list = list->next;
        free(temp);
    }

    return 0;
}*/
