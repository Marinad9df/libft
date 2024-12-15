/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:23:27 by marigon2          #+#    #+#             */
/*   Updated: 2024/12/15 18:34:57 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(size_t ac, t_list *list, ...)
{
	va_list	ap;
	void	**ptr;

	if (!list)
		return ;
	va_start(ap, list);
	while (ac-- > 0)
	{
		ptr = va_arg(ap, void **);
		if (ptr && *ptr)
		{
			free(*ptr);
			*ptr = NULL;
		}
	}
	va_end(ap);
}
