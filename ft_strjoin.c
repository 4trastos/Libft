/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:07:36 by davgalle          #+#    #+#             */
/*   Updated: 2023/10/03 19:22:48 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	z;

	new = (char *)malloc(ft_strlen(s1) + ft_strlen (s2) +1);
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	z = i;
	i = 0;
	while (s2[i] != '\0')
	{
		new[z] = s2[i];
		z++;
		i++;
	}
	new[z] = '\0';
	return (new);
}
/*
int	main(void)
{
	char	s1[]="mila esker";
	char	s2[]="ez horregatik";
	printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/
