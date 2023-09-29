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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == src || len == 0)
		return (dst);
	i = 0;
	if (d < s)
	{
		ft_memcpy(d, s, len);
	}
	else
	{
		i = len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}	
	}
	return (dst);
}
/*
int	main(void)
{
	char	src[]="marigorringo eta kilkerrak";
	char	dst[]="abcdefghijklm";
	printf("%s", ft_memmove(dst, src, 13));
			return (0);
}*/
