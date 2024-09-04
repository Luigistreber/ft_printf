/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:51:58 by lubravo-          #+#    #+#             */
/*   Updated: 2024/09/04 15:52:11 by lubravo-         ###   ########.fr       */
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
