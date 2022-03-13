/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_b_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbosa <abarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:14:01 by abarbosa          #+#    #+#             */
/*   Updated: 2022/03/10 18:47:27 by abarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

// void	ft_stack_b_init(t_list **lis_a)
// {
// 	t_list	*tmp;
// 	t_list	*lis_a_cpy;
// 	int		b;

// 	tmp = (*ft_stacks(A));
// 	while (tmp)
// 	{
// 		b = 0;
// 		lis_a_cpy = *lis_a;
// 		while (lis_a_cpy->content)
// 		{
// 			if (tmp->content == lis_a_cpy->content)
// 				b++;
// 			lis_a_cpy = lis_a_cpy->next;
// 		}
// 		if (b == 0)
// 		{
// 			while ((*ft_stacks(A))->content != tmp->content)
// 				ft_ra();
// 			ft_pb();
// 		}
// 		tmp = tmp->next;
// 	}
// }

void	ft_stack_b_init(t_list	*lis)
{
	t_list	*tmp;
	t_list	*lis_cpy;
	int		b;
	int		i;

	tmp = ft_lstcpy((*ft_stacks(A)));
	while (tmp)
	{
		i = 0;
		lis_cpy = lis;
		b = 0;
		while (lis_cpy)
		{
			if (lis_cpy->content == tmp->content)
				b++;
			lis_cpy = lis_cpy->next;
			i++;
		}
		if (b == 0)
		{
			if (i < ft_lstsize(*ft_stacks(A)))
				while ((*ft_stacks(A))->content != tmp->content)
					ft_do_commands(4);
			else
				while ((*ft_stacks(A))->content != tmp->content)
					ft_do_commands(7);
			ft_do_commands(11);
		}
		tmp = tmp->next;
	}
}