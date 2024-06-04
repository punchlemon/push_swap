/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:13:41 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 15:30:12 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

t_num	*create_num(int iter)
{
	t_num	*result;

	result = (t_num *)malloc(sizeof(t_num));
	if (result != NULL)
	{
		result->prev = result;
		result->iter = iter;
		result->next = result;
	}
	return (result);
}

void	delete_num(t_num *num)
{
	if (num != NULL)
	{
		num->prev = NULL;
		num->iter = 0;
		num->next = NULL;
		free(num);
	}
}

void	print_num(t_num *n)
{
	size_t	i;

	i = ft_printf("|%d", n->iter);
	while (i++ < 12)
		ft_printf(" ");
}

void	print_space(void)
{
	size_t	i;

	i = ft_printf("|");
	while (i++ < 12)
		ft_printf(" ");
}
