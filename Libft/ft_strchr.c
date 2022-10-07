/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaldi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:11:58 by fnaldi            #+#    #+#             */
/*   Updated: 2022/10/06 15:16:06 by fnaldi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*finder;

	finder = (char *)s;
	while (*finder != c)
	{
		if (*finder == '\0')
			return (0);
		finder++;
	}
	return (finder);
}
