/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:51:52 by lubravo-          #+#    #+#             */
/*   Updated: 2024/09/04 15:52:06 by lubravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	t_format	f;
	int			i;

	i = 0;
	f.format = format;
	va_start(f.args, format);
	while (*f.format)
	{
		if (*f.format == '%')
		{
			f.format++;
			i += ft_specifier(&f);
		}
		else
		{
			i += ft_putchar(*f.format);
			f.format++;
		}
	}
	va_end(f.args);
	return (i);
}
