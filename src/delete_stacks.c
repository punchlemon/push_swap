/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_stacks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:51:03 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 15:51:16 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_stacks(t_stacks *stacks)
{
	delete_stack(stacks->a);
	delete_stack(stacks->b);
	stacks->size = 0;
	free(stacks);
}
