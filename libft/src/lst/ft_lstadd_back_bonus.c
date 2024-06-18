/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:38:15 by retanaka          #+#    #+#             */
/*   Updated: 2024/04/23 10:19:47 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (lst == NULL || new == NULL)
		;
	else if (*lst == NULL)
		*lst = new;
	else
	{
		p = *lst;
		while (p -> next != NULL)
			p = p -> next;
		p -> next = new;
	}
}
