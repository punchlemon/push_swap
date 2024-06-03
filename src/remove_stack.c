/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:34:39 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 18:03:39 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_num	*remove_head_stack(t_stack *stack)
{
	t_num	*sep;
	t_num	*result;

	sep = stack->sep;
	if (sep->next != sep)
	{
		result = sep->next;
		sep->next = result->next;
		sep->next->prev = sep;
		result->next = result;
		result->prev = result;
		stack->len--;
	}
	else
		result = NULL;
	return (result);
}

t_num	*remove_tail_stack(t_stack *stack)
{
	t_num	*sep;
	t_num	*result;

	sep = stack->sep;
	if (sep->prev != sep)
	{
		result = sep->prev;
		sep->prev = result->prev;
		sep->prev->next = sep;
		result->next = result;
		result->prev = result;
		stack->len--;
	}
	else
		result = NULL;
	return (result);
}

t_num	*remove_secd_stack(t_stack *stack)
{
	t_num	*head;
	t_num	*result;

	head = stack->sep->next;
	if (head->next != stack->sep)
	{
		result = head->next;
		head->next = result->next;
		head->next->prev = head;
		result->next = result;
		result->prev = result;
		stack->len--;
	}
	else
		result = NULL;
	return (result);
}
