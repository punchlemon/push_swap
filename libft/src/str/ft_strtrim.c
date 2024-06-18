/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 07:23:39 by retanaka          #+#    #+#             */
/*   Updated: 2024/04/23 10:25:47 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_isset(const char c, const char *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	char		*buff;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = s1;
	end = start + ft_strlen(s1) - 1;
	while (*start != '\0' && ft_isset(*start, set))
		start++;
	if (*start != '\0')
	{
		while (ft_isset(*end, set))
			end--;
	}
	buff = malloc(end - start + 2);
	if (buff == NULL)
		return (NULL);
	ft_strlcpy(buff, start, end - start + 2);
	return (buff);
}
