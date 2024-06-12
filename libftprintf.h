/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:59:26 by luigi_streb       #+#    #+#             */
/*   Updated: 2024/06/12 18:39:42 by luigi_streb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stdarg.h>
# include <limits.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_put_unsignedint(unsigned int n);
int		ft_put_hex(unsigned long n, char format);
int		ft_put_ptr(void *ptr);
typedef struct s_format
{
	const char	*format;
	va_list		args;
}	t_format;
int		ft_specifier(t_format *f);
int		ft_printf(const char *format, ...);
#endif
