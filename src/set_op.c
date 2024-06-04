/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_op.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:56:56 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/04 18:02:51 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	set_op(t_op **ops_p, char *s, void (*f)(t_stacks **))
{
	(*ops_p)->s = s;
	(*ops_p)->f = f;
	(*ops_p)++;
}

void	set_ops(t_op *ops)
{
	set_op(&ops, "sa\n", sa);
	set_op(&ops, "sb\n", sb);
	set_op(&ops, "ss\n", ss);
	set_op(&ops, "pa\n", pa);
	set_op(&ops, "pb\n", pb);
	set_op(&ops, "ra\n", ra);
	set_op(&ops, "rb\n", rb);
	set_op(&ops, "rr\n", rr);
	set_op(&ops, "rra\n", rra);
	set_op(&ops, "rrb\n", rrb);
	set_op(&ops, "rrr\n", rrr);
}

size_t	check_ops_exe(char *s, t_op *ops, t_stacks **stacks)
{
	size_t	i;

	i = 0;
	while (i < 11)
	{
		if (!ft_strncmp(s, ops[i].s, 20))
		{
			ops[i].f(stacks);
			return (0);
		}
		i++;
	}
	return (1);
}
