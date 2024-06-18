/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:55:17 by retanaka          #+#    #+#             */
/*   Updated: 2024/04/23 09:05:32 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigit(int n)
{
	int	digit;

	digit = 0;
	if (n < 0)
	{
		digit++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

static char	*ft_storenum(char *dst, int n, int digit)
{
	if (n < 0)
	{
		dst[0] = '-';
		n *= -1;
	}
	dst[digit] = '\0';
	digit--;
	while (n > 0)
	{
		dst[digit] = (n % 10) + '0';
		n /= 10;
		digit--;
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*buff;
	int		digit;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	digit = ft_countdigit(n);
	buff = malloc((digit + 1) * sizeof(char));
	if (buff == NULL)
		return (NULL);
	return (ft_storenum(buff, n, digit));
}
