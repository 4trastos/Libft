/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:49:24 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/19 15:43:40 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*h;
	const char	*n;
	size_t		i;
	size_t		j;

	h = haystack;
	n = needle;
	i = 0;
	if (n[0] == '\0')
		return ((char *)h);
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (h[i + j] != '\0' && h[i + j] == n[j] && (i + j) < len)
		{
			if (n[j + 1] == '\0')
				return ((char *)&h[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	haystack[]="hola pedazo de cola";
	char	needle[]="pe";
	printf("%s", ft_strnstr(haystack, needle, 10));
	return (0);
}*/
