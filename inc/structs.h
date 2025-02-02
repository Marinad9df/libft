/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:23:27 by marigon2          #+#    #+#             */
/*   Updated: 2024/12/15 18:30:25 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# include <stdint.h>

typedef void	(*t_del_func)(void *);

typedef struct s_hash_entry
{
	int64_t				value;
	struct s_hash_entry	*next;
}	t_hash_entry;

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

typedef struct s_list
{
	void				*content;
	struct s_list		*next;
}	t_list;

#endif
