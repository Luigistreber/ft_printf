/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:53:32 by lubravo-          #+#    #+#             */
/*   Updated: 2024/09/04 15:53:35 by lubravo-         ###   ########.fr       */
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
