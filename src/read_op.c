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
	char	buf[21];

	clear_buf(buf, 21);
	read(1, buf, 20);
	if (check_ops_exe(buf, ops, stacks))
		return (1);
	return (0);
}
