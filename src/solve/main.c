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
	int			fd;

	stacks = create_stacks();
	set_stacks(stacks, argc, argv);
	// print_stacks(stacks);
	map_rank(&stacks);
	// print_stacks(stacks);
	str = NULL;
	system("touch .str");
	fd = open(".str", O_WRONLY);
	solve_op(stacks, &str, fd);
	close(fd);
	fd = open(".str", O_RDONLY);
	// print_stacks(stacks);
	ft_printf("%s", str);
	delete_stacks(stacks);
	free(str);
	close(fd);
	system("rm .str");
	return (0);
}
