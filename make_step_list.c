/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_step_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbosa <abarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 19:00:21 by abarbosa          #+#    #+#             */
/*   Updated: 2022/03/10 17:38:04 by abarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_make_step_list_comp(t_list **b, t_list *element)
{
	t_list	*tmp;
	t_list	*tmp_2;

	tmp = (*ft_stacks(A));
	tmp_2 = ft_lstlast(tmp);
	if ((tmp_2->content < element->content) && (element->content < tmp->content))
	{
		ft_lstadd_back(b, ft_lstnew(10));
		return ;
	}
	while (tmp->next)
	{
		ft_lstadd_back(b, ft_lstnew(4));
		if ((tmp->content < element->content) && (element->content < (tmp->next)->content))
			break ;
		tmp = tmp->next;
	}
	ft_lstadd_back(b, ft_lstnew(10));
}

int		ft_make_step_min_max(t_list	**b, t_list	*element)
{
	t_list	*tmp;

	tmp = NULL;
	tmp = ft_lstcpy((*ft_stacks(A)));
	if (element->content < ft_stack_min((*ft_stacks(A))))
	{
		while (tmp && (tmp->content != ft_stack_min(*ft_stacks(A))))
		{
			ft_lstadd_back(b, ft_lstnew(4));
			tmp = tmp->next;
		}
		ft_lstadd_back(b, ft_lstnew(10));
		return (1);
	}
	if (element->content > ft_stack_max((*ft_stacks(A))))
	{
		while (tmp && (tmp->content != ft_stack_max(*(ft_stacks(A)))))
		{
			ft_lstadd_back(b, ft_lstnew(4));
			tmp = tmp->next;
		}
		ft_lstadd_back(b, ft_lstnew(4));
		ft_lstadd_back(b, ft_lstnew(10));
		return (1);
	}
	return (0);
}

t_list	*ft_make_step_list(t_list *element, int index)
{
	t_list	*tmp;
	t_list	*to_return;
	int		b;

	tmp = element;
	to_return = NULL;
	while (index > 0)
	{
		ft_lstadd_back(&to_return, ft_lstnew(5));
		index--;
	}
	b = ft_make_step_min_max(&to_return, element);
	if (b != 0)
		return (to_return);
	ft_make_step_list_comp(&to_return, element);
	ft_reverse_aplier(&to_return, 4);
	ft_reverse_aplier(&to_return, 5);
	ft_duplicate_aplier(&to_return, 1);
	ft_duplicate_aplier(&to_return, 4);
	return (to_return);
}