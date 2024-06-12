/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:30:36 by luigi_streb       #+#    #+#             */
/*   Updated: 2024/06/12 17:26:40 by luigi_streb      ###   ########.fr       */
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
