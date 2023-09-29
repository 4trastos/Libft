/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:27:19 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/18 17:50:02 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = ft_strlen(s1);
	s2 = (char *)malloc(len + 1);
	if (s2 != NULL)
	{
		ft_strcpy(s2, s1);
	}
	return (s2);
}
/*
int	main(void)
{
	char	s1[] = "urte berri on";
	char	*s2 = ft_strdup(s1);
	ft_strdup(s1);

	printf("%s", s2);
	free(s2);
	return (0);
}*/
