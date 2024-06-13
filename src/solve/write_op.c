/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:19:54 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/08 18:20:28 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

size_t	write_op(t_op *ops, t_stacks **stacks)
{
	exe_op(get_op(ops, "sa"), stacks);
	while (0)
	{
		if (check_stacks(*stacks))
			break ;
	}
	return (0);
}

t_op	*get_op(t_op *ops, char *s)
{
	if (s == NULL)
		return (NULL);
	if (s[0] == 's')
	{
		if (s[1] == 'a')
			return (ops + 0);
		else if (s[1] == 'b')
			return (ops + 1);
		else if (s[1] == 's')
			return (ops + 2);
		else
			return (NULL);
	}
	else if (s[0] == 'p')
	{
		if (s[1] == 'a')
			return (ops + 3);
		else if (s[1] == 'b')
			return (ops + 4);
		else
			return (NULL);
	}
	else
		return (get_op2(ops, s));
}

t_op	*get_op2(t_op *ops, char *s)
{
	if (s[0] == 'r')
	{
		if (s[1] == 'a')
			return (ops + 5);
		else if (s[1] == 'b')
			return (ops + 6);
		else if (s[1] == 'r')
		{
			if (s[2] == '\0')
				return (ops + 7);
			else if (s[2] == 'a')
				return (ops + 8);
			else if (s[2] == 'b')
				return (ops + 9);
			else if (s[2] == 'r')
				return (ops + 10);
			else
				return (NULL);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}

size_t	exe_op(t_op *ops, t_stacks **stacks)
{
	if (ops == NULL)
		return (print_error());
	write(1, ops->s, ft_strlen(ops->s));
	ops->f(stacks);
	return (0);
}
