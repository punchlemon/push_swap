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
#define M 214748364

int	ft_atoi_revised(const char *str, int *num)
{
	int		sign;

	sign = 1;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	*num = 0;
	while (1)
	{
		if (*str < '0' || *str > '9')
			return (1);
		if (sign == 1 && (*num > M || (*num == M && *str > '7')))
			return (1);
		else if (sign == -1 && (*num > M || (*num == M && *str > '8')))
			return (1);
		else if (sign == -1 && (*num == M && *str == '8'))
			return (*num = -2147483648, 0);
		*num = *num * 10 + (*str - '0');
		str++;
		if (!*str)
			break ;
	}
	return (*num *= sign, 0);
}

int	check_dup_stacks(t_stacks *stacks)
{
	t_num	*sep;
	t_num	*num1;
	t_num	*num2;

	sep = stacks->a->sep;
	num1 = sep->next;
	while (num1 != sep)
	{
		num2 = num1->next;
		while (num2 != sep)
		{
			if (num1->num == num2->num)
				return (delete_stacks(stacks), 1);
			num2 = num2->next;
		}
		num1 = num1->next;
	}
	return (0);
}

int	set_stacks(t_stacks *stacks, int argc, char **argv)
{
	int	num;

	if (argc < 2)
		return (delete_stacks(stacks), 1);
	else
	{
		stacks->size = 1;
		while (stacks->size < (size_t)(argc))
		{
			if (ft_atoi_revised(argv[stacks->size++], &num))
				return (delete_stacks(stacks), 1);
			add_tail_stack(stacks->a, create_num(num));
		}
	}
	return (check_dup_stacks(stacks));
}
