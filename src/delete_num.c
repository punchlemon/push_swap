/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:24:57 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 15:30:24 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
