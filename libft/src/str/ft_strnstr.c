/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:53:47 by retanaka          #+#    #+#             */
/*   Updated: 2024/04/23 08:52:32 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && *(haystack + i) != '\0')
	{
		j = 0;
		while (i + j < len && *(haystack + i + j) != '\0'
			&& *(haystack + i + j) == *(needle + j))
		{
			j++;
			if (*(needle + j) == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
