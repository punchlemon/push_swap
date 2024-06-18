/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:29:32 by retanaka          #+#    #+#             */
/*   Updated: 2024/04/23 08:11:44 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	s--;
	while (*++s)
		if (*s == (c & 0xff))
			last = (char *)s;
	if (!(c & 0xff))
		return ((char *)s);
	return ((char *)last);
}
