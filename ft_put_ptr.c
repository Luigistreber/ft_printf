/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:52:17 by lubravo-          #+#    #+#             */
/*   Updated: 2024/09/04 15:52:21 by lubravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_ptr(void *ptr)
{
	int				i;
	unsigned long	n;

	i = 0;
	n = (unsigned long)ptr;
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	else
	{
		i += ft_putstr("0x");
		i += ft_put_hex(n, 'x');
	}
	return (i);
}
