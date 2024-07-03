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

void	two_args_stacks(t_stacks *stacks, int argc, char **argv)
{
	int	iter;
	int	i;

	argv = ft_split(argv[1], ' ');
	argc = 0;
	while (argv[argc])
		argc++;
	stacks->size = 0;
	while (stacks->size < (size_t)(argc))
	{
		iter = ft_atoi(argv[stacks->size++]);
		add_tail_stack(stacks->a, create_num(iter));
	}
	i = -1;
	while (argv[++i])
		free(argv[i]);
	free(argv);
}

void	set_stacks(t_stacks *stacks, int argc, char **argv)
{
	int	iter;

	if (argc < 2)
		return ;
	if (argc == 2)
		two_args_stacks(stacks, argc, argv);
	else
		stacks->size = 1;
	while (stacks->size < (size_t)(argc))
	{
		iter = ft_atoi(argv[stacks->size++]);
		add_tail_stack(stacks->a, create_num(iter));
	}
}
