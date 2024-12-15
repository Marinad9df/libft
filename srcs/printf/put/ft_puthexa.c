/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:23:27 by marigon2          #+#    #+#             */
/*   Updated: 2024/12/15 18:35:34 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char format)
{
	char			*base;
	unsigned int	num;
	int				i;
	unsigned int	base_len;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	i = 0;
	num = (unsigned int)n;
	base_len = ft_strlen(base);
	if (num > (base_len - 1))
		i += ft_puthexa(num / base_len, format);
	i += ft_putchar(*(base + (num % base_len)));
	return (i);
}
