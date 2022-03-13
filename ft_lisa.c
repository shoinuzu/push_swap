/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lisa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbosa <abarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:19:03 by abarbosa          #+#    #+#             */
/*   Updated: 2022/03/10 18:58:08 by abarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"
#include <stdio.h>

t_list	*lis(int len, int *array)
{
	int		i;
	int		c;
	int		*v;
	t_list	*p;
	t_list	*n;

	n = ft_calloc(len, sizeof * n);
	p = ft_calloc(len, sizeof * n);
	i = 0;
	v = array;
	len++;
	while (i < len)
	{
		n[i].content = v[i];
		i++;
	}
	i = len;
	while (i)
	{
		p = n + i;
		while (p < n + len)
		{
			p++;
			if (p->content > n[i].content && p->index >= n[i].index)
			{
				n[i].next = p;
				n[i].index = p->index + 1;
			}
		}
		i--;
	}
	i = 0;
	p = n;
	while (i < len)
	{
		if (n[i].index > p->index)
			p = n + i;
		i++;
	}
	return (p);
	free(n);
}
