/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaldi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:04:26 by fnaldi            #+#    #+#             */
/*   Updated: 2022/10/06 14:04:52 by fnaldi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	time[100];
	size_t	i;

	i = 0;
	while (i < n)
	{
		time[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = time[i];
		i++;
	}
	return (dest);
}
