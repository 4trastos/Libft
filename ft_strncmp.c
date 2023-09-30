/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:35:05 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/30 18:47:29 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((const unsigned char) s1[i] - (const unsigned char)s2[i]);
		i ++;
	}
	return (0);
}
/*int	main(void)
{
	const char s1[]="abbcc";
	const char s2[]="abbcd";
	printf("%d", ft_strncmp(s1, s2, 4));

	return (0);
}*/
