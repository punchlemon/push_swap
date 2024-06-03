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
