/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:34:34 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 15:34:56 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_stack(t_stack *stack)
{
	t_num	*sep;
	t_num	*i;
	t_num	*next;

	if (stack != NULL)
	{
		sep = stack->sep;
		i = sep->next;
		while (i != sep)
		{
			next = i->next;
			delete_num(i);
			i = next;
		}
		stack->sep = NULL;
		stack->len = 0;
		free(stack);
	}
}
