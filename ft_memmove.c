/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:12:53 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/19 14:34:49 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len) {
    unsigned char *d = dst;
    const unsigned char *s = src;

    if (dst == src || len == 0)
        return (dst);

    if (d < s) {
        // Copia hacia adelante (origen < destino)
        for (size_t i = 0; i < len; i++)
            d[i] = s[i];
    } else {
        // Copia hacia atrás (origen >= destino)
        for (size_t i = len; i > 0; i--)
            d[i-1] = s[i-1];
    }
    return (dst);
}

