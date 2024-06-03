/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:37:02 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 20:44:00 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

size_t	check_stacks(t_stacks *stacks)
{
	t_num	*sep;
	t_num	*i;

	if (stacks->b->len != 0)
		return (0);
	sep = stacks->a->sep;
	i = sep->next;
	while (i != sep && i->next != sep)
	{
		if (i->iter >= i->next->iter)
			return (0);
		i = i->next;
	}
	ft_printf("OK\n");
	return (1);
}
