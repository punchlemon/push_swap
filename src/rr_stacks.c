/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_stacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:24:42 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 21:19:11 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_stack(t_stack *stack)
{
	add_head_stack(stack, remove_tail_stack(stack));
}

void	rra_stacks(t_stacks *stacks)
{
	rr_stack(stacks->a);
}

void	rrb_stacks(t_stacks *stacks)
{
	rr_stack(stacks->b);
}

void	rrr_stacks(t_stacks *stacks)
{
	rra_stacks(stacks);
	rrb_stacks(stacks);
}
