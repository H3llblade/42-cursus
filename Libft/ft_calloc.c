/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaldi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:56:19 by fnaldi            #+#    #+#             */
/*   Updated: 2022/10/13 16:56:21 by fnaldi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*narr;
	size_t	i;

	i = nmemb * size;
	if (nmemb != 0 && i / nmemb != size)
		return (NULL);
	narr = (void *)malloc(i);
	if (!narr)
		return (NULL);
	ft_bzero(narr, i);
	return (narr);
}
