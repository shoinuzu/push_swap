/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbosa <abarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 08:43:52 by abarbosa          #+#    #+#             */
/*   Updated: 2022/03/11 13:28:03 by abarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int	ft_check_completion(void)
{
	t_list	*tmp;

	tmp = NULL;
	tmp = (*ft_stacks(B));
	if (tmp == NULL)
	{
		tmp = (*ft_stacks(A));
		while (tmp->next != NULL)
		{
			if ((tmp->next)->content < tmp->content)
				return (1);
			tmp = tmp->next;
		}
	}
	return (0);
}

/*
1	-> sa
2	-> sb
3	-> ss
4 	-> ra
5 	-> rb
6 	-> rr
7 	-> rra
8 	-> rrb
9 	-> rrr
10	-> pa
11	-> pb
*/

void	ft_do_commands(int command)
{
	if (command == 1)
	{
		ft_sa();
		ft_putstr_fd("sa\n", 1);
	}
	if (command == 2)
	{
		ft_sb();
		ft_putstr_fd("sb\n", 1);
	}
	if (command == 3)
	{
		ft_ss();
		ft_putstr_fd("ss\n", 1);
	}
	if (command == 4)
	{
		ft_ra();
		ft_putstr_fd("ra\n", 1);
	}
	if (command == 5)
	{
		ft_rb();
		ft_putstr_fd("rb\n", 1);
	}
	if (command == 6)
	{
		ft_rr();
		ft_putstr_fd("rr\n", 1);
	}
	if (command == 7)
	{
		ft_rra();
		ft_putstr_fd("rra\n", 1);
	}
	if (command == 8)
	{
		ft_rrb();
		ft_putstr_fd("rrb\n", 1);
	}
	if (command == 9)
	{
		ft_rrr();
		ft_putstr_fd("rrr\n", 1);
	}
	if (command == 10)
	{
		ft_pa();
		ft_putstr_fd("pa\n", 1);
	}
	if (command == 11)
	{
		ft_pb();
		ft_putstr_fd("pb\n", 1);
	}
}

int	ft_stack_max(t_list *list)
{
	int	to_return;

	to_return = 0;
	while (list)
	{
		if (list->content > to_return)
			to_return = list->content;
		list = list->next;
	}
	return (to_return);
}

int	ft_stack_min(t_list	*list)
{
	int	to_return;

	to_return = INT_MAX;
	while (list)
	{
		if (list->content < to_return)
			to_return = list->content;
		list = list->next;
	}
	return (to_return);
}

void	ft_sorting(void)
{
	int		index;
	int		min;
	int		to_pa_index;
	t_list	*b;
	t_list	*to_pa;

	index = 0;
	min = INT_MAX;
	b = (*ft_stacks(B));
	to_pa = NULL;
	while (b)
	{
		if (ft_lstsize(ft_make_step_list(b, index)) < min)
		{
			min = ft_lstsize(ft_make_step_list(b, index));
			to_pa = b;
			to_pa_index = index;
		}
		b = b->next;
		index++;
	}
	ft_execution(ft_make_step_list(to_pa, to_pa_index));
}
