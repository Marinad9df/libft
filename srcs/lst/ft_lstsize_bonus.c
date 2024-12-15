/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 18:24:15 by marigon2          #+#    #+#             */
/*   Updated: 2024/12/15 18:59:22 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  // Add this line to include the header file

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*temp;

	if (!lst)
		return (0);
	temp = lst;
	size = 0;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
