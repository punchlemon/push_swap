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

t_num	*create_num(int num)
{
	t_num	*result;

	result = (t_num *)malloc(sizeof(t_num));
	if (result != NULL)
	{
		result->prev = result;
		result->num = num;
		result->iter = 0;
		result->next = result;
	}
	return (result);
}

void	delete_num(t_num *num)
{
	if (num != NULL)
	{
		num->prev = NULL;
		num->num = 0;
		num->iter = 0;
		num->next = NULL;
		free(num);
	}
}

void	print_num(t_num *n)
{
	size_t	i;

	i = ft_printf("| %d", n->iter);
	while (i++ < 13)
		ft_printf(" ");
	i = ft_printf(": %d", n->num);
	while (i++ < 13)
		ft_printf(" ");
}

void	print_space(void)
{
	size_t	i;

	i = ft_printf("|");
	while (i++ < 26)
		ft_printf(" ");
}
