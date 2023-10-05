/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:40:47 by davgalle          #+#    #+#             */
/*   Updated: 2023/10/05 19:08:09 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*aux;

	i = 1;
	if (!lst)
		return (0);
	aux = lst;
	while (aux->next != NULL)
	{
		aux = aux->next;
		i++;
	}
	return (i);
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

    // Calcular el tamaño de la lista utilizando ft_lstsize
    int size = ft_lstsize(node1);

    // Imprimir el tamaño de la lista
    printf("Tamaño de la lista: %d\n", size);

    // Limpieza de memoria
    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/
