/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:46:22 by luigi_streb       #+#    #+#             */
/*   Updated: 2024/06/12 18:49:32 by luigi_streb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_hex(unsigned long n, char format)
{
	int			i;
	const char	*hex_digits;

	i = 0;
	if (format == 'x')
	{
		hex_digits = "0123456789abcdef";
	}
	else
	{
		hex_digits = "0123456789ABCDEF";
	}
	if (n >= 16)
		i += ft_put_hex(n / 16, format);
	i += ft_putchar(hex_digits[n % 16]);
	return (i);
}
