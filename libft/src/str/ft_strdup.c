/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:42:53 by retanaka          #+#    #+#             */
/*   Updated: 2024/04/23 07:43:02 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*p;

	len = ft_strlen(s1) + 1;
	p = (char *)malloc(len * sizeof(char));
	if (p != NULL)
		ft_strlcpy(p, s1, len);
	return (p);
}
