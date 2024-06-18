/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:09:34 by retanaka          #+#    #+#             */
/*   Updated: 2024/04/23 08:26:14 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	if (!count || !size)
		return (malloc(0));
	if (count > SIZE_MAX / size)
		return (NULL);
	i = -1;
	ptr = malloc(count * size);
	if (ptr)
		while (++i < count * size)
			*((char *)ptr + i) = 0;
	return (ptr);
}
