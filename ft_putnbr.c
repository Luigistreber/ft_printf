/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:53:02 by lubravo-          #+#    #+#             */
/*   Updated: 2024/09/04 15:53:04 by lubravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return ((ft_putchar('0')));
	else if (n == INT_MIN)
	{
		i += ft_putstr("-2147483648");
		return (i);
	}
	else if (n < 0)
	{
		i += ft_putchar('-');
		n = -n;
	}
	if (n <= 9)
		i += ft_putchar(n + '0');
	else
	{
		i += ft_putnbr(n / 10);
		i += ft_putchar(n % 10 + '0');
	}
	return (i);
}
