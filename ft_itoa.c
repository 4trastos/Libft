/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_itoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:47:40 by davgalle          #+#    #+#             */
/*   Updated: 2023/10/05 20:09:30 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_numlen(int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	char			*result;
	unsigned int	num;

	len = ft_numlen(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		result[0] = '0';
	result[len] = '\0';
	while (num != 0)
	{
		result[len - 1] = '0' + (num % 10);
		num = num / 10;
		len--;
	}
	return (result);
}
/*
int main()
{
    int number = -12345;
    char *str = ft_itoa(number);

    if (str != NULL)
    {
        printf("Número: %d\n", number);
        printf("Cadena: %s\n", str);
        free(str);
    }
    else
    {
        printf("Error: No se pudo asignar memoria.\n");
    }

    return 0;
}*/
