/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commands_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbosa <abarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:29:23 by abarbosa          #+#    #+#             */
/*   Updated: 2022/03/13 11:01:21 by abarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"
#include <stdio.h>

void	ft_sa(void)
{
	t_list	*tmp;

	tmp = ((*ft_stacks(A))->next);
	(*ft_stacks(A))->next = ((*ft_stacks(A))->next)->next;
	tmp->next = (*ft_stacks(A));
	(*ft_stacks(A)) = tmp;
}

void	ft_sb(void)
{
	t_list	*tmp;

	tmp = ((*ft_stacks(B))->next);
	(*ft_stacks(B))->next = ((*ft_stacks(B))->next)->next;
	tmp->next = (*ft_stacks(B));
	(*ft_stacks(B)) = tmp;
}

void	ft_ss(void)
{
	ft_sa();
	ft_sb();
}

void	ft_pa(void)
{
	t_list	*tmp;

	if (!(ft_stacks(B)))
		return ;
	tmp = (*ft_stacks(B))->next;
	(*ft_stacks(B))->next = (*(ft_stacks(A)));
	(*ft_stacks(A)) = (*ft_stacks(B));
	(*ft_stacks(B)) = tmp;
}

void	ft_pb(void)
{
	t_list	*tmp;

	if (!(ft_stacks(A)))
		return ;
	tmp = (*ft_stacks(A))->next;
	(*ft_stacks(A))->next = (*(ft_stacks(B)));
	(*ft_stacks(B)) = (*ft_stacks(A));
	(*ft_stacks(A)) = tmp;
}
