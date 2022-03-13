/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_otimization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbosa <abarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:47:47 by abarbosa          #+#    #+#             */
/*   Updated: 2022/03/10 19:03:00 by abarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"
#include <stdio.h>

// dw = 4 for ra and 5 ft rb
void	ft_reverse_aplier(t_list **b, int dw)
{
	int		len;
	int		counter;
	t_list	*tmp;

	if (dw == 4)
		len = ft_lstsize(*ft_stacks(A));
	else
		len = ft_lstsize(*ft_stacks(B));
	tmp = *b;
	counter = 0;
	while (tmp)
	{
		if (tmp->content == dw)
			counter++;
	tmp = tmp->next;
	}
	if (counter > ((len + 1) / 2))
	{
		len -= counter;
		while (len-- > 0)
			ft_lstadd_front(b, ft_lstnew(dw + 3));
		tmp = *b;
		while (tmp)
		{
			if (tmp->content == dw)
				ft_lstpop(b, tmp);
			tmp = tmp->next;
		}
	}
}

void	ft_delone(t_list **b, int dw)
{
	t_list	*tmp;

	tmp = *b;
	while (tmp)
	{
		if (tmp->content == dw)
		{
			ft_lstpop(b, tmp);
			return ;
		}
		tmp = tmp->next;
	}
}

// 1 for ra and 4 for rra
void	ft_duplicate_aplier(t_list	**b, int dw)
{
	int		a_counter;
	int		b_counter;
	t_list	*tmp;

	a_counter = 0;
	b_counter = 0;
	tmp = *b;
	while (tmp)
	{
		if (tmp->content == 3 + dw)
			a_counter++;
		else if (tmp->content == 4 + dw)
			b_counter++;
		tmp = tmp->next;
	}
	tmp = *b;
	while ((a_counter > 0) && (b_counter > 0))
	{
		ft_delone(b, 3 + dw);
		ft_delone(b, 4 + dw);
		ft_lstadd_front(b, ft_lstnew(5 + dw));
		a_counter--;
		b_counter--;
	}
}
