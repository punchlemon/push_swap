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

void	pa_stacks(t_stacks *stacks)
{
	add_head_stack(stacks->a, remove_head_stack(stacks->b));
}

void	pb_stacks(t_stacks *stacks)
{
	add_head_stack(stacks->b, remove_head_stack(stacks->a));
}
