/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:15:34 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/02 00:05:46 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	*stacks;
	t_op		ops[11];

	set_ops(ops);
	stacks = create_stacks();
	set_stacks(stacks, argc, argv);
	while (1)
	{
		print_stacks(stacks);
		if (check_stacks(stacks))
			break ;
		if (read_op(ops, &stacks))
			break ;
	}
	delete_stacks(stacks);
	return (0);
}
