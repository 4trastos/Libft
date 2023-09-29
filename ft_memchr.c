/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:35:30 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/26 18:06:11 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*j;
	size_t				i;

	j = s;
	i = 0;
	while (i < n)
	{
		if (j[i] == (unsigned char)c)
			return (&((char *)s)[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	s[]="eskerrik";
	printf("%s", ft_memchr(s, 'k', 4));
	return (0);
}*/
