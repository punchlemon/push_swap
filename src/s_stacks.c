/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_stacks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:24:42 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 18:12:15 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_stack(t_stack *stack)
{
	add_head_stack(stack, remove_secd_stack(stack));
}

void	sa_stacks(t_stacks *stacks)
{
	s_stack(stacks->a);
}

void	sb_stacks(t_stacks *stacks)
{
	s_stack(stacks->b);
}

void	ss_stacks(t_stacks *stacks)
{
	sa_stacks(stacks);
	sb_stacks(stacks);
}
