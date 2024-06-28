/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:36:43 by retanaka          #+#    #+#             */
/*   Updated: 2024/06/02 23:55:54 by retanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>

typedef struct s_num
{
	struct s_num	*prev;
	size_t			iter;
	struct s_num	*next;
}	t_num;

typedef struct s_stack
{
	t_num	*sep;
	size_t	len;
	char	*s;
	char	*p;
	char	*r;
	char	*rr;
}	t_stack;

typedef struct s_stacks
{
	t_stack	*a;
	t_stack	*b;
	size_t	size;
}	t_stacks;

typedef struct s_op
{
	char	*s;
	void	(*f)(t_stacks **);
}	t_op;

typedef struct s_ops
{
	t_op	*sep;
	size_t	size;
}	t_ops;

void		init_stacks(t_stacks *stacks);
t_stacks	*create_stacks(void);
void		delete_stacks(t_stacks *stacks);
void		set_stacks(t_stacks *stacks, int argc, char **argv);
void		print_stacks(t_stacks *stacks);
t_stacks	*duplicate_stacks(t_stacks *stacks);
t_stack		*create_stack(void);
void		delete_stack(t_stack *stack);
void		add_head_stack(t_stack *stack, t_num *num);
void		add_tail_stack(t_stack *stack, t_num *num);
t_num		*remove_head_stack(t_stack *stack);
t_num		*remove_tail_stack(t_stack *stack);
t_num		*remove_secd_stack(t_stack *stack);
t_num		*get_i_num_from_stack(t_stack *stack, size_t index);
void		print_stack(t_stack *stack);
t_stack		*duplicate_stack(t_stack *stack);
t_num		*create_num(int iter);
void		delete_num(t_num *num);
void		print_num(t_num *num);
void		print_space(void);
void		set_ops(t_op *ops);
void		sa(t_stacks *stacks);
void		sb(t_stacks *stacks);
void		ss(t_stacks *stacks);
void		pa(t_stacks *stacks);
void		pb(t_stacks *stacks);
void		ra(t_stacks *stacks);
void		rb(t_stacks *stacks);
void		rr(t_stacks *stacks);
void		rra(t_stacks *stacks);
void		rrb(t_stacks *stacks);
void		rrr(t_stacks *stacks);
void		add_str(char **str, char *s);
void		map_rank(t_stacks **stacks);
size_t		read_op(t_op *ops, t_stacks **stacks);
size_t		solve_op(t_stacks *stacks, char **str, int fd);
void		exe(t_stacks *stacks, char *s, char **str);
size_t		check_ops_exe(char *s, t_op *ops, t_stacks **stacks);
size_t		check_exe(t_stacks *stacks, char *s);
void		execute_op(t_stacks *stacks, int fd);
size_t		check_stacks(t_stacks *stacks);
size_t		print_error(void);
void		devide_b(t_stacks *stacks, char **str, size_t start, size_t len);
void		devide_a(t_stacks *stacks, char **str, size_t start, size_t len);

#endif
