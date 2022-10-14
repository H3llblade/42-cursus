/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaldi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:57:32 by fnaldi            #+#    #+#             */
/*   Updated: 2022/10/14 14:57:35 by fnaldi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	index;
	char			*mods;

	mods = malloc(sizeof(char) * (len + 1));
	if (!s || !(mods))
		return (NULL);
	index = 0;
	while (start < ft_strlen((char *)s) && s[start + index] && index < len)
	{
		mods[index] = s[start + index];
		index++;
	}
	mods[index] = '\0';
	return (mods);
}
