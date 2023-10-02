/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:49:24 by davgalle          #+#    #+#             */
/*   Updated: 2023/10/02 17:45:15 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (tofind[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == tofind[j] && (i + j) < len)
		{
			if (tofind[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[]="hola pedazo de cola";
	char	tofind[]="pe";
	printf("%s", ft_strnstr(str, tofind, 10));
	return (0);
}*/
