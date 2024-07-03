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

void	radix_sort(t_stacks *stacks, char **str, int dgt)
{
	t_num	*num;
	t_num	*sep;
	size_t	i;
	size_t	j;

	if (dgt > 0)
		radix_sort(stacks, str, dgt - 1);
	sep = stacks->a->sep;
	i = 0;
	j = 0;
	while (j < stacks->size)
	{
		num = sep->next;
		if (num->iter & (1 << dgt))
			exe(stacks, "ra\n", str);
		else
		{
			i++;
			exe(stacks, "pb\n", str);
		}
		j++;
	}
	while (i--)
		exe(stacks, "pa\n", str);
}

size_t	solve_op(t_stacks *stacks, char **str, int fd)
{
	int		dgt;
	size_t	max;

	if (check_stacks(stacks))
		return (*str = ft_strdup(""), 1);
	if (stacks == NULL)
		return (1);
	dgt = 0;
	max = stacks->size - 1;
	while (1)
	{
		max >>= 1;
		if (!max)
			break ;
		dgt++;
	}
	radix_sort(stacks, str, dgt);
	write(fd, *str, ft_strlen(*str));
	return (0);
}

// program of solve_op
// else if (stacks->size == 2
// 	&& stacks->a->sep->next->iter > stacks->a->sep->next->next->iter)
// 	exe(stacks, "sa\n", str);
// else if (stacks->size == 3)
// 	solve_3(stacks, str);
// else
// 	devide_a(stacks, str, 0, stacks->size);
// void	solve_3(t_stacks *stacks, char **str)
// {
// 	int		a0;
// 	int		a1;
// 	a0 = stacks->a->sep->next->iter;
// 	a1 = stacks->a->sep->next->next->iter;
// 	if (a0 == 0 && a1 == 2)
// 	{
// 		exe(stacks, "sa\n", str);
// 		exe(stacks, "ra\n", str);
// 	}
// 	else if (a0 == 1 && a1 == 0)
// 		exe(stacks, "sa\n", str);
// 	else if (a0 == 1 && a1 == 2)
// 		exe(stacks, "rra\n", str);
// 	else if (a0 == 2 && a1 == 0)
// 		exe(stacks, "ra\n", str);
// 	else if (a0 == 2 && a1 == 1)
// 	{
// 		exe(stacks, "ra\n", str);
// 		exe(stacks, "sa\n", str);
// 	}
// }
// void	devide_b(t_stacks *stacks, char **str, size_t start, size_t len)
// {
// 	size_t	i;
// 	if (len / 2 > 2)
// 		devide_b(stacks, str, start, len / 2);
// 	else if (len / 2 == 2
// 		&& stacks->b->sep->next->iter < stacks->b->sep->next->next->iter)
// 		exe(stacks, stacks->b->s, str);
// 	i = -1;
// 	while (++i < (len - len / 2 + 1) / 2)
// 		exe(stacks, stacks->a->p, str);
// 	if ((len - len / 2 + 1) / 2 > 2)
// 		devide_a(stacks, str, start + len - len / 2, len - len / 2);
// 	i = -1;
// 	while (++i < (len - len / 2) / 2)
// 		exe(stacks, stacks->a->p, str);
// 	if ((len - len / 2 + 1) / 2 > 2)
// 		devide_a(stacks, str, start + len - len / 2, len / 2);
// }
// void	devide_a(t_stacks *stacks, char **str, size_t start, size_t len)
// {
// 	t_num	*num;
// 	size_t	i;
// 	i = -1;
// 	while (++i < len)
// 	{
// 		num = stacks->a->sep->next;
// 		if (num->iter < (len - len / 2) + start)
// 		{
// 			exe(stacks, stacks->b->p, str);
// 			if (num->iter >= (len - len / 2) / 2 + start)
// 				exe(stacks, stacks->b->r, str);
// 		}
// 		else
// 			exe(stacks, stacks->a->r, str);
// 	}
// 	i = -1;
// 	while (++i < (len - len / 2 + 1) / 2)
// 		exe(stacks, stacks->b->rr, str);
// 	if (len / 2 > 2)
// 	{
// 		devide_a(stacks, str, start + len - len / 2, len / 2);
// 		devide_b(stacks, str, start, len / 2);
// 	}
// 	else if (len / 2 == 2
// 		&& stacks->a->sep->next->iter > stacks->a->sep->next->next->iter)
// 		exe(stacks, stacks->a->s, str);
// }
