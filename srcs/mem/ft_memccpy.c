/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:23:27 by marigon2          #+#    #+#             */
/*   Updated: 2024/12/15 18:34:33 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;
	unsigned char	chr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	chr = (unsigned char)c;
	while (n > 0)
	{
		*dst_ptr = *src_ptr;
		dst_ptr++;
		if (*src_ptr == chr)
			return (dst_ptr);
		src_ptr++;
		n--;
	}
	return (NULL);
}
