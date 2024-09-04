/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:53:17 by lubravo-          #+#    #+#             */
/*   Updated: 2024/09/04 15:53:20 by lubravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_specifier(t_format *f)
{
	int		i;

	i = 0;
	if (*f -> format == '%')
		i += ft_putchar('%');
	else if (*f -> format == 'c')
		i += ft_putchar(va_arg(f -> args, int));
	else if (*f -> format == 'd' || *f -> format == 'i')
		i += ft_putnbr(va_arg(f -> args, int));
	else if (*f -> format == 's')
		i += ft_putstr(va_arg(f -> args, char *));
	else if (*f -> format == 'u')
		i += ft_put_unsignedint(va_arg(f -> args, unsigned int));
	else if (*f -> format == 'x')
		i += ft_put_hex(va_arg(f -> args, unsigned int), 'x');
	else if (*f -> format == 'X')
		i += ft_put_hex(va_arg(f -> args, unsigned int), 'X');
	else if (*f -> format == 'p')
		i += ft_put_ptr(va_arg(f -> args, void *));
	f -> format++;
	return (i);
}
