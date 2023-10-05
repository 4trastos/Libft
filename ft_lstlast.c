/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:25:33 by davgalle          #+#    #+#             */
/*   Updated: 2023/10/05 19:12:07 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	if (!lst)
		return (lst);
	aux = lst;
	while (aux->next)
		aux = aux->next;
	return (aux);
}
/*
int main()
{
    // Crear una lista enlazada con tres nodos
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    t_list *node3 = (t_list *)malloc(sizeof(t_list));

    node1->content = "Nodo 1";
    node1->next = node2;
    node2->content = "Nodo 2";
    node2->next = node3;
    node3->content = "Nodo 3";
    node3->next = NULL;

    // Encontrar el último nodo de la lista utilizando ft_lstlast
    t_list *lastNode = ft_lstlast(node1);

    if (lastNode)
    {
        // Imprimir el contenido del último nodo
        printf("Contenido del último nodo: %s\n", (char *)lastNode->content);
    }
    else
    {
        printf("La lista está vacía.\n");
    }

    // Limpieza de memoria
    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/
