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
#include "ft_printf.h"

int	main(int argc, char **argv)
{
	t_stacks	*stacks;

	stacks = create_stacks();
	set_stacks(stacks, argc, argv);
	print_stacks(stacks);
	while (read_op(&stacks))
	{
		print_stacks(stacks);
		if (check_stacks(stacks))
			break ;
	}
	delete_stacks(stacks);
	return (0);
}
