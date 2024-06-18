/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:54:05 by retanaka          #+#    #+#             */
/*   Updated: 2024/04/23 06:49:46 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*buf;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	p = *lst;
	*lst = NULL;
	while (p != NULL)
	{
		buf = p -> next;
		ft_lstdelone(p, del);
		p = buf;
	}
}
