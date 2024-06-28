/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:15:34 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 15:58:40 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

void	init_stacks(t_stacks *stacks)
{
	stacks->a->s = "sa\n";
	stacks->a->p = "pa\n";
	stacks->a->r = "ra\n";
	stacks->a->rr = "rra\n";
	stacks->b->s = "sb\n";
	stacks->b->p = "pb\n";
	stacks->b->r = "rb\n";
	stacks->b->rr = "rrb\n";
	stacks->size = 0;
}

t_stacks	*create_stacks(void)
{
	t_stacks	*result;

	result = (t_stacks *)malloc(sizeof(t_stacks));
	if (result != NULL)
	{
		result->a = create_stack();
		if (result->a == NULL)
		{
			free(result);
			return (NULL);
		}
		result->b = create_stack();
		if (result->b == NULL)
		{
			delete_stack(result->a);
			free(result);
			return (NULL);
		}
		init_stacks(result);
	}
	return (result);
}

void	delete_stacks(t_stacks *stacks)
{
	delete_stack(stacks->a);
	delete_stack(stacks->b);
	stacks->size = 0;
	free(stacks);
}

t_stacks	*duplicate_stacks(t_stacks *stacks)
{
	t_stacks	*result;

	result = create_stacks();
	delete_stack(result->a);
	delete_stack(result->b);
	result->a = duplicate_stack(stacks->a);
	result->b = duplicate_stack(stacks->b);
	init_stacks(result);
	result->size = result->a->len + result->b->len;
	return (result);
}

void	print_stacks(t_stacks *stacks)
{
	size_t	i;

	ft_printf("-------------------------\n");
	ft_printf("|     a     |     b     |\n");
	ft_printf("-------------------------\n");
	i = 0;
	while (i < stacks->size)
	{
		if (i < stacks->a->len)
			print_num(get_i_num_from_stack(stacks->a, i));
		else
			print_space();
		if (i < stacks->b->len)
			print_num(get_i_num_from_stack(stacks->b, i));
		else
			print_space();
		ft_printf("|\n");
		i++;
	}
	ft_printf("-------------------------\n");
}
