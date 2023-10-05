/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:59:42 by davgalle          #+#    #+#             */
/*   Updated: 2023/10/05 18:46:57 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
/*
int main()
{
    // Crear un nodo
    char *data = "Hola, mundo!";
    t_list *node = ft_lstnew(data);

    if (node)
    {
        printf("Contenido del nodo: %s\n", (char *)node->content);

        // Limpieza de memoria
        free(node);
    }
    else
    {
        printf("Error al crear el nodo.\n");
    }

    return 0;
}*/
