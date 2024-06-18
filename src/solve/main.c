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
	char		*str;
	int			fd;

	stacks = create_stacks();
	set_stacks(stacks, argc, argv);
	map_rank(&stacks);
	print_stacks(stacks);
	str = NULL;
	system("touch str");
	fd = open("str", O_WRONLY);
	solve_op(&stacks, &str, fd);
	close(fd);
	fd = open("str", O_RDONLY);
	execute_op(&stacks, fd);
	print_stacks(stacks);
	delete_stacks(stacks);
	close(fd);
	return (0);
}
