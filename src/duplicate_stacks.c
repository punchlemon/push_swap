/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate_stacks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:07:17 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 16:13:28 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*duplicate_stacks(t_stacks *stacks)
{
	t_stacks	*result;

	result = create_stacks();
	delete_stack(result->a);
	delete_stack(result->b);
	result->a = duplicate_stack(stacks->a);
	result->b = duplicate_stack(stacks->b);
	result->size = result->a->len + result->b->len;
	return (result);
}
