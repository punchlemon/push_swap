/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:48:18 by retanaka          #+#    #+#             */
/*   Updated: 2024/04/23 08:24:22 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*p;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		s_len = 0;
	else
		s_len = s_len - start;
	if (s_len > len)
		s_len = len;
	p = (char *)malloc((s_len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	*(p + s_len) = '\0';
	if (s_len > 0)
		ft_strlcpy(p, s + start, s_len + 1);
	return (p);
}
