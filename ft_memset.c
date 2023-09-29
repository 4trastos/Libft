/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:14:49 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/23 19:28:06 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*j;
	size_t			i;

	j = b;
	i = 0;
	while (i < len)
	{
		j[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	 char str[] = "Hello, World!";
	 printf("%s", ft_memset(str, '.', 8));	 
	 return (0);
	 }*/
//Sustituir un caracter (value) "num" veces dentro de una string.
