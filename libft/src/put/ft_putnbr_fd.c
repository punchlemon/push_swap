/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 08:03:59 by retanaka          #+#    #+#             */
/*   Updated: 2024/04/23 10:20:12 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	ones_place;

	if (n == INT_MIN)
		write(fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else
	{
		if (n < 0)
			n = ~n + write(fd, "-", 1);
		ones_place = (n % 10) + '0';
		n /= 10;
		if (n > 0)
			ft_putnbr_fd(n, fd);
		write (fd, &ones_place, 1);
	}
}
