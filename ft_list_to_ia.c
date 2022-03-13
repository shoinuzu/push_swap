/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_to_ia.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbosa <abarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:26:39 by abarbosa          #+#    #+#             */
/*   Updated: 2022/03/10 18:58:56 by abarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int	*ft_list_to_ia(t_list *a_stack)
{
	int	*to_return;
	int	iterator;

	to_return = (int *)malloc(sizeof(int) * ft_lstsize(a_stack));
	iterator = 0;
	while (a_stack != NULL)
	{
		to_return[iterator] = a_stack->content;
		a_stack = a_stack->next;
		iterator++;
	}
	to_return[iterator] = 0;
	return (to_return);
}

t_list	*ft_list_iversion(int *astack)
{
	int		i;
	t_list	*to_return;

	i = 0;
	to_return = NULL;
	while (astack[i])
		i++;
	while (i)
	{
		ft_lstadd_back(&to_return, ft_lstnew(astack[i]));
		i--;
	}
	return (to_return);
}

int	*ft_ia_init(size_t size, int value)
{
	int	*to_return;
	int	iterator;

	to_return = (int *)malloc(sizeof(int) * size);
	iterator = 0;
	while (to_return[iterator])
	{
		to_return[iterator] = value;
		iterator++;
	}
	return (to_return);
}
