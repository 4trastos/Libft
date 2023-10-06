/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:59:42 by davgalle          #+#    #+#             */
/*   Updated: 2023/10/06 19:15:58 by davgalle         ###   ########.fr       */
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
    char *data = "Hola, mundo!";
    t_list *node = ft_lstnew(data);

    if (node)
    {
        printf("Contenido del nodo: %s\n", (char *)node->content);
        free(node);
    }
    else
    {
        printf("Error al crear el nodo.\n");
    }
    return 0;
}*/
