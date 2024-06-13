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

void	rra(t_stacks **stacks)
{
	add_head_stack((*stacks)->a, remove_tail_stack((*stacks)->a));
}

void	rrb(t_stacks **stacks)
{
	add_head_stack((*stacks)->b, remove_tail_stack((*stacks)->b));
}

void	rrr(t_stacks **stacks)
{
	rra(stacks);
	rrb(stacks);
}
