/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:09:10 by retanaka          #+#    #+#             */
/*   Updated: 2024/04/23 06:58:14 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*new;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	map = NULL;
	while (lst != NULL)
	{
		new = ft_lstnew((*f)(lst -> content));
		if (new == NULL)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&map, new);
		lst = lst -> next;
	}
	return (map);
}
