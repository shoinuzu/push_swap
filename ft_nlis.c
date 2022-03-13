/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlis.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbosa <abarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:42:21 by abarbosa          #+#    #+#             */
/*   Updated: 2022/03/04 15:26:42 by abarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

t_list	*ft_nlis(void)
{
	t_list *to_return;
	int	*s;
	int *a;
	int *b;
	int x;
	int y;
	int i;
	int d;

	x = 0;
	a = ft_ia_init(ft_lstsize(*ft_stacks(A)) + 1, 1);
	b = ft_ia_init(ft_lstsize(*ft_stacks(A)) + 1, -1);
	s = ft_list_to_ia(*ft_stacks(A));
	while (x < ft_lstsize(*ft_stacks(A)))
	{
		y = 0;
		while (y < x)
		{
			if ((s[y] < s[x]) && (a[x] < (a[y] + 1)))
			{
				a[x] = a[y] + 1;
				b[x] = y;
			}
			y++;
		}
		x++;
	}
	x = a[0];
	y = 0;
	i = 1;
	while (i < ft_lstsize(*ft_stacks(A)))
	{
		if (a[i] > x)
		{
			x = a[i];
			y = i;
		}
		i++;
	}
	to_return = NULL;
	d = 0;
	while (y != -1 && d < ft_lstsize(*ft_stacks(A)))
	{
		ft_lstadd_back(&to_return, ft_lstnew(s[y]));
		y = b[y];
		d++;
	}
	return (ft_treat_lis(to_return));
}
