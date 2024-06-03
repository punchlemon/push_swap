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
		result->size = 0;
	}
	return (result);
}
