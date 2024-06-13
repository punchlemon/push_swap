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

	if (argc < 2)
		return ;
	while (stacks->size < (size_t)(argc - 1))
	{
		iter = ft_atoi(argv[++stacks->size]);
		add_tail_stack(stacks->a, create_num(iter));
	}
}
