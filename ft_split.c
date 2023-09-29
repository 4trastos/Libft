/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:44:26 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/29 20:06:04 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	**ft_empty_split(void)
{
	char	**aux;

	aux = (char **)malloc(sizeof(char *));
	if (!aux)
		return (NULL);
	aux[0] = NULL;
	return (aux);
}

char	*ft_strdup_custom(const char *s, size_t n)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (n == 0)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (n + 1));
	if (dst == 0)
		return (NULL);
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_free_str(char **aux)
{
	int	i;

	i = 0;
	while (aux[i])
	{
		free(aux[i]);
		i++;
	}
	free(aux);
	return (NULL);
}

int	ft_countc(char const *s, char c)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (s[0] != '\0' && s[0] != c)
		x = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0' && s[i - 1] == c)
			x++;
		i++;
		if (s[i] == c)
			i++;
	}
	return (x);
}

char	**ft_split(char const *s, char c)
{
	char	**aux;
	int		i;
	int		j;
	int		memo;

	i = 0;
	j = 0;
	if (!s || *s == '\0')
		return (ft_empty_split());
	aux = (char **)malloc(sizeof(char *) * (ft_countc(s, c) + 1));
	if (!aux)
		return (NULL);
	while (j < ft_countc(s, c) && s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		memo = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		aux[j] = ft_strdup_custom(&s[memo], i - memo);
		if (aux[j++] == NULL)
			return (ft_free_str(aux));
	}
	aux[j] = NULL;
	return (aux);
}
/*
int main(void)
{
    const char *s = "---francinette-no-es---de--fiar-";
    char **aux = ft_split(s, '-');
    
    if (aux)
    {
        int i = 0;
        while (aux[i] != NULL)
        {
            printf("%s\n", aux[i]);
            i++;
        }
        ft_free_str(aux);
    }
    else
    {
        printf("Error al dividir la cadena.\n");
    }

    return 0;
}*/
