/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:23:27 by marigon2          #+#    #+#             */
/*   Updated: 2024/12/15 18:48:36 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include "shared.h"

int		ft_nbrlen(long n);
int		ft_putnbr(int n);
int		ft_putchar(int c);
int		ft_printf(const char *str, ...);
long	ft_abs(long n);
void	ft_putbase_fd(int nbr, const char *base, int fd);
int		ft_puthexa(unsigned long n, char format);
int		ft_putstr(char const *s);
int		ft_putunsigned(unsigned long n);
int		ft_putaddress(void *format);

#endif
