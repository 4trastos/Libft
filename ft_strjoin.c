/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:07:36 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/26 11:39:59 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countchar(char const *s1, char *sb)
{
	int	z;

	z = 0;
	while (s1[z] != '\0')
	{
		sb[z] = s1[z];
		z++;
	}
	return (z);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		ds1;
	int		ds2;
	char	*sb;

	ds1 = ft_strlen(s1);
	ds2 = ft_strlen(s2);
	sb = (char *)malloc(ds1 + ds2 + 1);
	if (sb == NULL)
		return (NULL);
	i = ft_countchar(s1, sb);
	j = 0;
	while (s2[j] != '\0')
	{
		sb[i] = s2[j];
		i++;
		j++;
	}
	sb[i] = '\0';
	return (sb);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[]="mila esker";
	char	s2[]="ez horregatik";
	printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/
