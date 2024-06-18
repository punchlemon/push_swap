/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 07:15:10 by retanaka          #+#    #+#             */
/*   Updated: 2024/04/23 07:29:05 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = -1;
	if (dst > src)
		while (n--)
			*((char *)dst + n) = *((char *)src + n);
	else
		while (++i < n)
			*((char *)dst + i) = *((char *)src + i);
	return (dst);
}
