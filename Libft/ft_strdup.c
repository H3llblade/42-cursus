/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaldi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:08:46 by fnaldi            #+#    #+#             */
/*   Updated: 2022/10/13 20:08:48 by fnaldi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*s1;
	size_t		len;

	len = ft_strlen(s) + 1;
	s1 = malloc(len);
	if (!s1)
		return (NULL);
	ft_memcpy(s1, s, len);
	return (s1);
}
