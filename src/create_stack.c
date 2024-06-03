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
