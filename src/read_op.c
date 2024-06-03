/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:23:41 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 19:33:07 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	clear_buf(char *buf, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		buf[i++] = 0;
}

size_t	read_op(t_stacks **stacks)
{
	char	buf[11];

	clear_buf(buf, 11);
	read(1, buf, 10);
	if (!ft_strncmp(buf, "map_rank\n", 10))
		map_rank_stacks(stacks);
	else if (!ft_strncmp(buf, "sa\n", 10))
		sa_stacks(*stacks);
	else if (!ft_strncmp(buf, "sb\n", 10))
		sb_stacks(*stacks);
	else if (!ft_strncmp(buf, "ss\n", 10))
		ss_stacks(*stacks);
	else if (!ft_strncmp(buf, "pa\n", 10))
		pa_stacks(*stacks);
	else if (!ft_strncmp(buf, "pb\n", 10))
		pb_stacks(*stacks);
	else if (!ft_strncmp(buf, "ra\n", 10))
		ra_stacks(*stacks);
	else if (!ft_strncmp(buf, "rb\n", 10))
		rb_stacks(*stacks);
	else if (!ft_strncmp(buf, "rr\n", 10))
		rr_stacks(*stacks);
	else if (!ft_strncmp(buf, "rra\n", 10))
		rra_stacks(*stacks);
	else if (!ft_strncmp(buf, "rrb\n", 10))
		rrb_stacks(*stacks);
	else if (!ft_strncmp(buf, "rrr\n", 10))
		rrr_stacks(*stacks);
	else
		return (0);
	return (1);
}
