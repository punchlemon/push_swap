/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:45:43 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/03 16:45:52 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

void	print_num(t_num *n)
{
	size_t	i;

	i = ft_printf("|%d", n->iter);
	while (i++ < 12)
		ft_printf(" ");
}
