/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaldi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:18:13 by fnaldi            #+#    #+#             */
/*   Updated: 2022/10/07 09:18:14 by fnaldi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	research;

	str = (unsigned char *)s;
	research = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == research)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
