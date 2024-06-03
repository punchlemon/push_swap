/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:44:03 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 15:50:21 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*duplicate_stack(t_stack *stack)
{
	t_num	*sep;
	t_num	*i;
	t_stack	*result;

	result = create_stack();
	sep = stack->sep;
	i = sep->next;
	while (i != sep)
	{
		add_tail_stack(result, create_num(i->iter));
		i = i->next;
	}
	return (result);
}
