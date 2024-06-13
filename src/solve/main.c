/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:15:34 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/05 10:41:40 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	t_stacks	*stacks;
	t_op		ops[11];

	set_ops(ops);
	stacks = create_stacks();
	set_stacks(stacks, argc, argv);
	map_rank(&stacks);
	write_op(ops, &stacks);
	delete_stacks(stacks);
	return (0);
}
