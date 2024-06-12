/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:29:26 by luigi_streb       #+#    #+#             */
/*   Updated: 2024/06/11 22:25:05 by luigi_streb      ###   ########.fr       */
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
