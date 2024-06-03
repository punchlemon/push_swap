/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:52:45 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 16:18:47 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

void	print_stacks(t_stacks *stacks)
{
	size_t	i;

	ft_printf("-------------------------\n");
	ft_printf("|     a     |     b     |\n");
	ft_printf("-------------------------\n");
	i = 0;
	while (i < stacks->size)
	{
		if (i < stacks->a->len)
			print_num(get_i_num_from_stack(stacks->a, i));
		else
			print_space();
		if (i < stacks->b->len)
			print_num(get_i_num_from_stack(stacks->b, i));
		else
			print_space();
		ft_printf("|\n");
		i++;
	}
	ft_printf("-------------------------\n\n");
}
