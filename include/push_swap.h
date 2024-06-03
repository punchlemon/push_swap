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
# include <limits.h>

typedef struct s_num
{
	struct s_num	*prev;
	int				iter;
	struct s_num	*next;
}	t_num;

typedef struct s_stack
{
	t_num	*sep;
	size_t	len;
}	t_stack;

typedef struct s_stacks
{
	t_stack	*a;
	t_stack	*b;
	size_t	size;
}	t_stacks;

t_stacks	*create_stacks(void);
void		delete_stacks(t_stacks *stacks);
void		set_stacks(t_stacks *stacks, int argc, char **argv);
void		print_stacks(t_stacks *stacks);
t_stacks	*duplicate_stacks(t_stacks *stacks);
void		map_rank_stacks(t_stacks **stacks);
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
size_t		compare_num(t_num *low, t_num *high);
void		print_num(t_num *num);
void		print_space(void);
void		sa_stacks(t_stacks *stacks);
void		sb_stacks(t_stacks *stacks);
void		ss_stacks(t_stacks *stacks);
void		pa_stacks(t_stacks *stacks);
void		pb_stacks(t_stacks *stacks);
void		ra_stacks(t_stacks *stacks);
void		rb_stacks(t_stacks *stacks);
void		rr_stacks(t_stacks *stacks);
void		rra_stacks(t_stacks *stacks);
void		rrb_stacks(t_stacks *stacks);
void		rrr_stacks(t_stacks *stacks);
size_t		read_op(t_stacks **stacks);
size_t		check_stacks(t_stacks *stacks);

#endif
