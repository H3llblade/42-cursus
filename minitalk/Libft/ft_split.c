/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaldi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:15:07 by fnaldi            #+#    #+#             */
/*   Updated: 2022/10/18 15:15:09 by fnaldi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_allocate(char **tab, char const *s, char separator)
{
	char		**tab_p;
	char const	*temp;

	temp = s;
	tab_p = tab;
	while (*temp)
	{
		while (*s == separator)
			++s;
		temp = s;
		while (*temp && *temp != separator)
			++temp;
		if (*temp == separator || temp > s)
		{
			*tab_p = ft_substr(s, 0, temp - s);
			s = temp;
			++tab_p;
		}
	}
	*tab_p = NULL;
}

static int	ft_count_words(char const *s, char separator)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		while (*s == separator)
			++s;
		if (*s)
			++counter;
		while (*s && *s != separator)
			++s;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	new = (char **)malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	ft_allocate(new, s, c);
	return (new);
}
