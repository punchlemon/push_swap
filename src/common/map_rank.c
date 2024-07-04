/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_rank_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:15:34 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 16:27:52 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	count_low(t_stacks *stacks, t_num *num)
{
	t_num	*i;
	t_num	*sep;
	size_t	result;

	result = 0;
	sep = stacks->a->sep;
	i = sep->next;
	while (i != sep)
	{
		result += i->num < num->num;
		i = i->next;
	}
	return (result);
}

void	map_rank(t_stacks **stacks)
{
	t_stacks	*dup;
	t_num		*sep;
	t_num		*i;

	if ((*stacks)->size > 0)
	{
		dup = duplicate_stacks(*stacks);
		sep = dup->a->sep;
		i = sep->next;
		while (i != sep)
		{
			i->iter = count_low(*stacks, i);
			i = i->next;
		}
		delete_stacks(*stacks);
		*stacks = dup;
	}
}
