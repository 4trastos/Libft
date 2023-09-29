/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:51:18 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/18 17:49:09 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*j;
	size_t			i;

	j = s;
	i = 0;
	while (i < len)
	{
		j[i] = 0;
		i++;
	}
}
/*
int    main(void)
{
    char str[] = "eskerrik asko";

    ft_bzero(str, 8);
    printf("%c", str[10]);
	return 0;
}*/
