/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:23:27 by marigon2          #+#    #+#             */
/*   Updated: 2024/12/15 18:41:00 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	check(void *content)
{
	if (content)
		printf("Content: %p\n", content);
	else
		printf("Content: NULL\n");
}

int	main(void)
{
	char	**array;
	t_list	*list;

	array = malloc(sizeof(char *) * 3);
	array[0] = malloc(10);
	array[1] = malloc(20);
	array[2] = NULL;
	ft_hold_mem(3, &list, NULL, &array[0], &array[1]);
	ft_hold_mem(1, &list, &array);
	ft_lstclear(&list, free);
	return (0);
}
