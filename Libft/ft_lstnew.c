/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaldi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:14:08 by fnaldi            #+#    #+#             */
/*   Updated: 2022/10/18 20:14:10 by fnaldi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elt;

	elt = malloc(sizeof(t_list));
	if (!elt)
		return (0);
	elt->content = content;
	elt->next = 0;
	return (elt);
}
