/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_lis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbosa <abarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:18:40 by abarbosa          #+#    #+#             */
/*   Updated: 2022/02/22 13:50:01 by abarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

t_list	*ft_treat_lis(t_list *lis)
{
	t_list	*ant;

	ant = lis;
	while (lis)
	{
		if (lis->content == (lis->next)->content)
			lis->next = NULL;
		lis = lis->next;
	}
	return (ant);
}

t_list	*ft_lstcpy(t_list *list)
{
	t_list	*to_return;

	to_return = NULL;
	while (list)
	{
		ft_lstadd_back(&to_return, ft_lstnew(list->content));
		list = list->next;
	}
	return (to_return);
}