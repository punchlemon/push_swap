/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:53:40 by retanaka          #+#    #+#             */
/*   Updated: 2024/04/23 06:32:10 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iswhitespace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	num;

	sign = 1;
	while (ft_iswhitespace(*str))
		str++;
	sign = 1;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	num = 0;
	while (ft_isdigit(*str))
	{
		if (sign == 1
			&& (num > LONG_MAX / 10 || (num == LONG_MAX / 10 && *str >= '7')))
			return ((int)LONG_MAX);
		if (sign == -1
			&& (num > LONG_MAX / 10 || (num == LONG_MAX / 10 && *str >= '8')))
			return ((int)LONG_MIN);
		num = num * 10 + *str - '0';
		str++;
	}
	return ((int)num * sign);
}
