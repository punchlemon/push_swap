/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_stacks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:24:42 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 18:22:58 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stacks *stacks)
{
	add_head_stack(stacks->a, remove_head_stack(stacks->b));
}

void	pb(t_stacks *stacks)
{
	add_head_stack(stacks->b, remove_head_stack(stacks->a));
}

void	sa(t_stacks *stacks)
{
	add_head_stack(stacks->a, remove_secd_stack(stacks->a));
}

void	sb(t_stacks *stacks)
{
	add_head_stack(stacks->b, remove_secd_stack(stacks->b));
}

void	ss(t_stacks *stacks)
{
	sa(stacks);
	sb(stacks);
}
