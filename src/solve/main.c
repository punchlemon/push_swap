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
#include "get_next_line_bonus.h"

int	main(int argc, char **argv)
{
	t_stacks	*stacks;
	char		*str;

	stacks = create_stacks();
	if (argc == 1)
		return (0);
	if (set_stacks(stacks, argc, argv))
		return (write(2, "Error\n", 6), 1);
	str = NULL;
	map_rank(&stacks);
	solve_op(stacks, &str);
	ft_printf("%s", str);
	delete_stacks(stacks);
	free(str);
	return (0);
}
