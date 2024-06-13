/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_i_num_from_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:42:33 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 15:43:18 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_num	*get_i_num_from_stack(t_stack *stack, size_t index)
{
	size_t	i;
	t_num	*result;

	if (index >= stack->len)
		return (stack->sep);
	result = stack->sep->next;
	i = 0;
	while (i < index && result != stack->sep)
	{
		result = result->next;
		i++;
	}
	return (result);
}
