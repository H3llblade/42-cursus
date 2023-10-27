/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaldi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:26:17 by fnaldi            #+#    #+#             */
/*   Updated: 2022/10/26 16:26:18 by fnaldi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base_fd(uintptr_t nbr, int fd, int *count)
{
	if (nbr >= 16)
	{
		ft_putnbr_base_fd(nbr / 16, fd, count);
		ft_putnbr_base_fd(nbr % 16, fd, count);
	}
	else
		ft_putchar_fd("0123456789abcdef"[nbr], fd, count);
}
