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

void	clear_buf(char *buf, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		buf[i++] = 0;
}

size_t	read_op(t_op *ops, t_stacks **stacks)
{
	char	*buf;

	while (1)
	{
		buf = get_next_line(0);
		if (buf == NULL)
			break ;
		if (check_ops_exe(buf, ops, stacks))
			return (print_error());
	}
	if (check_stacks(*stacks))
		return (print_error());
	return (0);
}
