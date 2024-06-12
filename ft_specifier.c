/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:25:08 by luigi_streb       #+#    #+#             */
/*   Updated: 2024/06/12 18:50:15 by luigi_streb      ###   ########.fr       */
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
