/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_stacks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:51:46 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 15:52:12 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	set_stacks(t_stacks *stacks, int argc, char **argv)
{
	int	iter;
	int	argc_flag;

	argc_flag = 0;
	if (argc < 2)
		return ;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		argc = 0;
		while (argv[argc])
			argc++;
		stacks->size = 0;
		argc_flag = 1;
	}
	else
		stacks->size = 1;
	while (stacks->size < (size_t)(argc))
	{
		iter = ft_atoi(argv[stacks->size++]);
		add_tail_stack(stacks->a, create_num(iter));
	}
	if (argc_flag)
	{
		for (int i = 0; argv[i]; i++)
			free(argv[i]);
		free(argv);
	}
}
