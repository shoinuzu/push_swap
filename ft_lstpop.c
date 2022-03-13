/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbosa <abarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:15:09 by abarbosa          #+#    #+#             */
/*   Updated: 2022/03/10 18:59:02 by abarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_lstpop(t_list **list, t_list *to_pop)
{
	t_list	*tmp;
	t_list	*tmp_doispontozero;

	tmp = *list;
	if (tmp == to_pop)
	{
		*list = (*list)->next;
		free(tmp);
		return ;
	}
	while (tmp->next != to_pop)
		tmp = tmp->next;
	tmp_doispontozero = tmp->next;
	tmp->next = tmp->next->next;
	free(tmp_doispontozero);
}
