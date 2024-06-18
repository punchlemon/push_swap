/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:23:37 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/06 18:23:38 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*split_point(t_mem *mem, size_t result_len, size_t remain_len)
{
	char	*result;
	char	*remain;

	result = (char *)malloc(result_len + 1);
	if (!result)
		return (NULL);
	*(result + result_len) = 0;
	remain = (char *)malloc(remain_len + 1);
	if (!remain)
		return (free(result), NULL);
	*(remain + remain_len) = 0;
	mem->len = remain_len;
	while (remain_len--)
		*(remain + remain_len) = *(mem->str + result_len + remain_len);
	while (result_len--)
		*(result + result_len) = *(mem->str + result_len);
	if (mem->str)
		free(mem->str);
	mem->str = remain;
	return (result);
}

char	*split_nl(t_mem *mem)
{
	char	*result;
	size_t	result_len;
	size_t	remain_len;

	if (mem->len - mem->nl <= 1)
	{
		if (mem->read_len != -1)
			return (mem->i = 0, result = mem->str, mem->str = NULL, result);
		else if (mem->str)
			return (mem->i = 0, free(mem->str), mem->str = NULL, NULL);
		return (mem->i = 0, NULL);
	}
	result_len = mem->nl + 1;
	remain_len = mem->len - mem->nl - 1;
	result = split_point(mem, result_len, remain_len);
	if (!result && mem->str)
		return (free(mem->str), mem->str = NULL, result);
	return (result);
}

char	*ft_strjoin_revised(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*p;

	if (!s1 && !s2)
		return (NULL);
	s1_len = 0;
	if (s1)
		while (*(s1 + s1_len))
			s1_len++;
	s2_len = 0;
	if (s2)
		while (*(s2 + s2_len))
			s2_len++;
	p = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	*(p + s1_len + s2_len) = 0;
	if (s2)
		while (s2_len--)
			*(char *)(p + s1_len + s2_len) = *(char *)(s2 + s2_len);
	if (s1)
		while (s1_len--)
			*(char *)(p + s1_len) = *(char *)(s1 + s1_len);
	return (p);
}

void	read_mem(t_mem *mem)
{
	char	*buf;
	char	*joined;

	buf = (char *)malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (mem->read_len = -1, (void)0);
	mem->read_len = read(mem->fd, buf, BUFFER_SIZE);
	if (mem->read_len < 0)
		return (free(buf));
	*(buf + mem->read_len) = 0;
	if (mem->read_len == 0 && !mem->str)
		return (free(buf));
	joined = ft_strjoin_revised(mem->str, buf);
	if (mem->str)
		free(mem->str);
	free(buf);
	mem->str = joined;
}

char	*get_next_line(int fd)
{
	static t_mem	mem[4096];

	if (fd < 0 || fd >= 4096)
		return (NULL);
	mem[fd].fd = fd;
	if (!mem[fd].i)
		mem[fd].read_len = BUFFER_SIZE;
	while (++mem[fd].i)
	{
		mem[fd].len = 0;
		mem[fd].nl = 0;
		if (mem[fd].str)
		{
			while (*(mem[fd].str + mem[fd].len))
				++mem[fd].len;
			while (mem[fd].nl < mem[fd].len
				&& *(mem[fd].str + mem[fd].nl) != '\n')
				++mem[fd].nl;
		}
		if (mem[fd].nl < mem[fd].len || mem[fd].read_len <= 0)
			break ;
		read_mem(&mem[fd]);
	}
	return (split_nl(&mem[fd]));
}
