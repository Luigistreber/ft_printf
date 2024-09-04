/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsignedint.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubravo- <lubravo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:52:26 by lubravo-          #+#    #+#             */
/*   Updated: 2024/09/04 15:52:31 by lubravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_unsignedint(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_put_unsignedint(n / 10);
	i += ft_putchar(n % 10 + '0');
	return (i);
}
