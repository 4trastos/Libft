/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:58:07 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/19 14:39:39 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      ft_strlcat (char *dst, const char *src, size_t len)
{
    size_t  dst_len;
    size_t  src_len;
    size_t  i;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (len <= dst_len)
        return(src_len + len);
    i = 0;
    while (src[i] != '\0' && (dst_len + i) < (len - 1))
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}
/*
char dst[10] = "Hello";
ft_strlcat(dst, " World", 10);
// Resultado: "Hello Wor" (9 chars + null terminator)
// Return: 11 (5 + 6)

char buffer[10] = "Hello";
size_t result;

result = ft_strlcat(buffer, " World", 10);
// buffer = "Hello Wor", result = 11

result = ft_strlcat(buffer, " World", 5);
// buffer = "Hello", result = 11 (no modifica dst)
}*/
