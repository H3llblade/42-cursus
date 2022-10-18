/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaldi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:25:46 by fnaldi            #+#    #+#             */
/*   Updated: 2022/10/18 21:25:47 by fnaldi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst1;
	t_list	*new;

	lst1 = 0;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (new == 0)
			ft_lstclear(&lst1, del);
		ft_lstadd_back(&lst1, new);
		lst = lst->next;
	}
	return (lst1);
}
