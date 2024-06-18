/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 04:39:36 by retanaka          #+#    #+#             */
/*   Updated: 2024/04/23 08:06:52 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	char	*p;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	p = (char *)malloc((s_len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	p[s_len] = '\0';
	i = 0;
	while (i < s_len)
	{
		p[i] = (*f)(i, s[i]);
		i++;
	}
	return (p);
}
