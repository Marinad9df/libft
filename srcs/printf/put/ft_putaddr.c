/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:23:27 by marigon2          #+#    #+#             */
/*   Updated: 2024/12/15 18:35:22 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	rec_print(unsigned long n, const char *base)
{
	int	len;

	len = 0;
	if (n > (ft_strlen(base) - 1))
		len += rec_print(n / ft_strlen(base), base);
	len += ft_putchar(*(base + (n % ft_strlen(base))));
	return (len);
}

int	ft_putaddress(void *format)
{
	unsigned long	n;
	const char		*base;
	int				len;

	n = (unsigned long)format;
	base = "0123456789abcdef";
	len = ft_putstr("0x");
	len += rec_print(n, base);
	return (len);
}
