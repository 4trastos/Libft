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

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*x;
	const unsigned char	*z;
	size_t				i;

	x = (const unsigned char *)s1;
	z = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (x[i] != z[i])
		{
			return (x[i] - z[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[]= "eskerrik";
	char	s2[]= "eskERrik";
	printf("%d", ft_memcmp(s1, s2, 3));
	return (0);
}*/
