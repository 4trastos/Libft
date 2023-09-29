/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:00:08 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/26 16:25:44 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void f(unsigned int index, char *s)
{
    if (s[index] == 'o')
    {
        s[index] = '.';
    }
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int main(void)
{
	char str[] = "Jaiak, bai!";
    ft_striteri(str, &f);
    printf("%s\n", str);

    return (0);
}*/
