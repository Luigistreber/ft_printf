/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:45:45 by luigi_streb       #+#    #+#             */
/*   Updated: 2024/06/12 18:51:21 by luigi_streb      ###   ########.fr       */
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
		return (ft_putstr("0x0"));
	else
	{
		i += ft_putstr("0x");
		i += ft_put_hex(n, 'x');
	}
	return (i);
}
