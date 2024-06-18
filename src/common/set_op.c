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
#include "ft_printf.h"
#include "get_next_line.h"

void	execute_op(t_stacks **stacks, int fd)
{
	char	*s;
	
	while (1)
	{
		s = get_next_line(fd);
		ft_printf("%s", s);
		if (s == NULL)
		{
			write(1, "\n", 1);
			break ;
		}
		check_exe(stacks, s);
		free(s);
	}
}

size_t	check_exe(t_stacks **stacks, char *s)
{
	if (!ft_strncmp(s, "sa\n", 3))
		sa(stacks);
	else if (!ft_strncmp(s, "sb\n", 3))
		sb(stacks);
	else if (!ft_strncmp(s, "ss\n", 3))
		ss(stacks);
	else if (!ft_strncmp(s, "pa\n", 3))
		pa(stacks);
	else if (!ft_strncmp(s, "pb\n", 3))
		pb(stacks);
	else if (!ft_strncmp(s, "ra\n", 3))
		ra(stacks);
	else if (!ft_strncmp(s, "rb\n", 3))
		rb(stacks);
	else if (!ft_strncmp(s, "rr\n", 3))
		rr(stacks);
	else if (!ft_strncmp(s, "rra\n", 4))
		rra(stacks);
	else if (!ft_strncmp(s, "rrb\n", 4))
		rrb(stacks);
	else if (!ft_strncmp(s, "rrr\n", 4))
		rrr(stacks);
	else
		return (1);
	return (0);
}
