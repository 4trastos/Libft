/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:31:48 by davgalle          #+#    #+#             */
/*   Updated: 2023/10/06 17:35:39 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_lst = NULL;
    t_list *new_node;
    void *mapped_content;

    if (!lst || !f || !del) return NULL;

    while (lst)
    {
        mapped_content = f(lst->content);
        if (!mapped_content)
        {
            ft_lstclear(&new_lst, del);
            return NULL;
        }
        
        new_node = ft_lstnew(mapped_content);
        if (!new_node)
        {
            del(mapped_content);
            ft_lstclear(&new_lst, del);
            return NULL;
        }
        
        ft_lstadd_back(&new_lst, new_node);
        lst = lst->next;
    }
    return new_lst;
}
