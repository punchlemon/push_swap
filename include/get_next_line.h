/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:37:46 by retanaka          #+#    #+#             */
/*   Updated: 2024/05/31 20:32:10 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_mem
{
	int				fd;
	char			*str;
	size_t			len;
	size_t			nl_point;
	int				nl_flag;
	int				next_eol;
	int				still_eol;
	int				read_error;
	struct s_mem	*prev;
	struct s_mem	*next;
}	t_mem;

char	*get_next_line(int fd);
size_t	read_mem(t_mem *mem);
size_t	cat_mem(t_mem *mem, char *src, size_t src_len);
size_t	set_str(t_mem *mem, char **dst, char *src, size_t len);
size_t	split_nl(t_mem *mem, char **result);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*clear_str(char *str, size_t len);
void	*clear_mem(t_mem *mem);
size_t	end_mem(t_mem *mem);
size_t	check_nl(t_mem *mem);
void	*ft_calloc(size_t n, size_t m);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
