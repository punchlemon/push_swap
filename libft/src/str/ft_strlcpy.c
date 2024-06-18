/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:48:52 by retanaka          #+#    #+#             */
/*   Updated: 2024/04/23 08:49:29 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = -1;
	while (*(src + ++src_len))
		;
	if (dstsize == 0)
		return (src_len);
	if (dstsize > src_len + 1)
		dstsize = src_len + 1;
	*(char *)(dst + dstsize - 1) = 0;
	while (--dstsize)
		*(char *)(dst + dstsize - 1) = *(char *)(src + dstsize - 1);
	return (src_len);
}
