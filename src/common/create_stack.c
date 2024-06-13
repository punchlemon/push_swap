/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:00:01 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 16:05:31 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

t_stack	*create_stack(void)
{
	t_stack	*result;

	result = (t_stack *)malloc(sizeof(t_stack));
	if (result != NULL)
	{
		result->sep = create_num(INT_MAX);
		if (result->sep != NULL)
			result->len = 0;
		else
		{
			delete_stack(result);
			result = NULL;
		}
	}
	return (result);
}

void	delete_stack(t_stack *stack)
{
	t_num	*sep;
	t_num	*i;
	t_num	*next;

	if (stack != NULL)
	{
		sep = stack->sep;
		i = sep->next;
		while (i != sep)
		{
			next = i->next;
			delete_num(i);
			i = next;
		}
		stack->sep = NULL;
		stack->len = 0;
		free(stack);
	}
}

t_stack	*duplicate_stack(t_stack *stack)
{
	t_num	*sep;
	t_num	*i;
	t_stack	*result;

	result = create_stack();
	sep = stack->sep;
	i = sep->next;
	while (i != sep)
	{
		add_tail_stack(result, create_num(i->iter));
		i = i->next;
	}
	return (result);
}

void	print_stack(t_stack *stack)
{
	size_t	i;

	ft_printf("-------------\n");
	ft_printf("|   stack   |\n");
	ft_printf("-------------\n");
	i = 0;
	while (i < stack->len)
	{
		print_num(get_i_num_from_stack(stack, i));
		ft_printf("|\n");
		i++;
	}
	ft_printf("-------------\n");
}
