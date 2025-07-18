/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:52:38 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/19 15:38:09 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *x = (const unsigned char *)s1;
    const unsigned char *z = (const unsigned char *)s2;

    for (size_t i = 0; i < n; i++)
    {
        if (x[i] != z[i])
            return (x[i] - z[i]);
    }
    return 0;
}


