/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:19:54 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/18 14:44:01 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	add_str(char **str, char *s)
{
	char	*tmp;

	if (*str == NULL)
		*str = ft_strdup(s);
	else
	{
		tmp = ft_strjoin(*str, s);
		free(*str);
		*str = tmp;
	}
}

size_t	solve_op(t_stacks **stacks, char **str, int fd)
{
	if ((*stacks)->size == 3)
	add_str(str, "sa\n");
	add_str(str, "ra\n");
	if (stacks == NULL)
		return (1);
	write(fd, *str, ft_strlen(*str));
	return (0);
}

size_t	devide(t_stacks **stacks, char **str)
{
	if ((*stacks)->size == 3)
	{
		add_str(str, "ra\n");
		add_str(str, "pb\n");
		add_str(str, "pb\n");
		add_str(str, "rb\n");
	}
	return (0);
}
