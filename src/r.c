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

void	ra(t_stacks **stacks)
{
	add_tail_stack((*stacks)->a, remove_head_stack((*stacks)->a));
}

void	rb(t_stacks **stacks)
{
	add_tail_stack((*stacks)->b, remove_head_stack((*stacks)->b));
}

void	rr(t_stacks **stacks)
{
	ra(stacks);
	rb(stacks);
}
