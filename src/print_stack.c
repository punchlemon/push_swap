/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:36:42 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 16:46:43 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

void	print_stack(t_stack *stack)
{
	size_t	i;

	ft_printf("-------------\n");
	ft_printf("|   stack   |\n");
	ft_printf("-------------\n");
	i = 0;
	while (i < stack->len)
	{
		print_num(get_i_num_from_stack(stack, i));
		ft_printf("|\n");
		i++;
	}
	ft_printf("-------------\n");
}
