/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:50:23 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/30 20:31:01 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *d;
    const char *s;
    size_t i;
	
	d = dst;
	s = src;
	i = 0;

    while (i < n) {
        d[i] = s[i];
        i++;
    }
    return (dst);
}

