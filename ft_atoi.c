/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:52:26 by davgalle          #+#    #+#             */
/*   Updated: 2023/10/03 15:11:41 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(const char *str, int i)
{
	int	num;
	int	result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = str[i] - '0';
		result = result * 10 + num;
		i++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	result = ft_count(str, i);
	return (sign * result);
}
/*
int	main(void)
{
    char	str[]="   -1234abcd345";
	printf("%d", ft_atoi(str));
	return (0);
}*/
