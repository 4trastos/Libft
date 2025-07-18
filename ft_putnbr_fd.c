/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:08:02 by davgalle          #+#    #+#             */
/*   Updated: 2023/09/26 18:43:00 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd) {
    long num = n; // Usar long para evitar overflow con INT_MIN
    
    if (num < 0) {
        ft_putchar_fd('-', fd);
        num = -num;
    }
    if (num >= 10) {
        ft_putnbr_fd(num / 10, fd);
    }
    ft_putchar_fd((num % 10) + '0', fd);
}
