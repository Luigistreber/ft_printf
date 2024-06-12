/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsignedint.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi_streber <luigi_streber@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:14:11 by luigi_streb       #+#    #+#             */
/*   Updated: 2024/06/10 22:13:47 by luigi_streb      ###   ########.fr       */
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
