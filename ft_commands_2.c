/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commands_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbosa <abarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:54:39 by abarbosa          #+#    #+#             */
/*   Updated: 2022/03/13 11:01:08 by abarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_ra(void)
{
	t_list	*tmp;
	t_list	*tmp_doispontozero;

	tmp = (*ft_stacks(A));
	(*ft_stacks(A)) = (*ft_stacks(A))->next;
	ft_lstadd_back(ft_stacks(A), ft_lstnew(tmp->content));
	
}

void	ft_rb(void)
{
	t_list	*tmp;
	t_list	*tmp_doispontozero;

	tmp = (*ft_stacks(B));
	(*ft_stacks(B)) = (*ft_stacks(B))->next;
	ft_lstadd_back(ft_stacks(B), ft_lstnew(tmp->content));
}

void	ft_rr(void)
{
	ft_ra();
	ft_rb();
}

void	ft_rra(void)
{
	t_list	*tmp;
	int		t;

	tmp = (*ft_stacks(A));
	t = (ft_lstlast(tmp))->content;
	ft_lstadd_front(ft_stacks(A), ft_lstnew(t));
	while ((tmp->next)->next)
		tmp = tmp->next;
	tmp->next = NULL;
}

void	ft_rrb(void)
{
	t_list	*tmp;
	int		t;

	tmp = (*ft_stacks(B));
	t = (ft_lstlast(tmp))->content;
	ft_lstadd_front(ft_stacks(B), ft_lstnew(t));
	while ((tmp->next)->next)
		tmp = tmp->next;
	tmp->next = NULL;
}
