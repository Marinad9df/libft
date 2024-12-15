/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:23:27 by marigon2          #+#    #+#             */
/*   Updated: 2024/12/15 18:35:10 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_memrev_char(void *ptr, size_t size)
{
	unsigned char	*begin;
	unsigned char	*end;
	unsigned char	tmp;

	if (!ptr || size == 0)
		return ;
	begin = (unsigned char *)ptr;
	end = begin + size - 1;
	while (begin < end)
	{
		tmp = *begin;
		*begin++ = *end;
		*end-- = tmp;
	}
}

static void	ft_memrev_int(void *ptr, size_t size)
{
	unsigned char	*begin;
	unsigned char	*end;
	unsigned char	tmp;
	unsigned char	*start_int;
	unsigned char	*end_int;

	if (!ptr || size == 0)
		return ;
	begin = (unsigned char *)ptr;
	end = begin + size - sizeof(int);
	while (begin < end)
	{
		start_int = begin;
		end_int = end;
		while (start_int < begin + sizeof(int))
		{
			tmp = *start_int;
			*start_int++ = *end_int;
			*end_int-- = tmp;
		}
		begin += sizeof(int);
		end -= sizeof(int);
	}
}

void	ft_memrev(void *ptr, size_t size)
{
	if (!ptr || size == 0)
		return ;
	if (size % sizeof(int) == 0)
	{
		ft_memrev_int(ptr, size);
	}
	else if (size % sizeof(char) == 0)
	{
		ft_memrev_char(ptr, size);
	}
}
