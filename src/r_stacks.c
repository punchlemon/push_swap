/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_stacks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:24:42 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 21:18:13 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_stack(t_stack *stack)
{
	add_tail_stack(stack, remove_head_stack(stack));
}

void	ra_stacks(t_stacks *stacks)
{
	r_stack(stacks->a);
}

void	rb_stacks(t_stacks *stacks)
{
	r_stack(stacks->b);
}

void	rr_stacks(t_stacks *stacks)
{
	ra_stacks(stacks);
	rb_stacks(stacks);
}
