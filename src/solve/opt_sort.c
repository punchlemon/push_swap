#include "push_swap.h"
#include "ft_printf.h"
#define N 11

void	count_up_status(int (*status)[N])
{
	int	i;

	i = 0;
	while (i < N)
	{
		if ((*status)[i] > 0)
			i++;
		else
		{
			if (i > 0)
			{
				while (i--)
					if ((*status)[i] < 3)
						return ((*status)[i]++, (void)0);
					else
						(*status)[i] = 1;
				i = 0;
				while (++i < N)
					if ((*status)[i] == 0)
						return ((*status)[i] = 1, (void)0);
			}
			else
				return ((*status)[i]++, (void)0);
		}
	}
}

void	reflect_status(t_stacks *stacks, int *status)
{
	int	i;

	i = -1;
	while (++i < N && status[i])
	{
		if (status[i] == 1)
			sa(stacks);
		else if (status[i] == 2)
			ra(stacks);
		else if (status[i] == 3)
			rra(stacks);
	}
}

void	convert_status_str(int *status, char **str)
{
	int	i;

	i = -1;
	while (++i < N && status[i])
	{
		if (status[i] == 1)
			add_str(str, "sa\n");
		else if (status[i] == 2)
			add_str(str, "ra\n");
		else if (status[i] == 3)
			add_str(str, "rra\n");
	}
}

void	opt_sort(t_stacks *stacks, char **str)
{
	int			status[N];
	int			i;
	t_stacks	*dup;

	i = -1;
	while (++i < N)
		status[i] = 0;
	while (1)
	{
		dup = duplicate_stacks(stacks);
		reflect_status(dup, status);
		if (check_stacks(dup))
		{
			delete_stacks(dup);
			reflect_status(stacks, status);
			convert_status_str(status, str);
			return ;
		}
		delete_stacks(dup);
		count_up_status(&status);
	}
}
