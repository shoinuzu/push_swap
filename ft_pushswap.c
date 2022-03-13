/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbosa <abarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:29:52 by abarbosa          #+#    #+#             */
/*   Updated: 2022/03/13 11:01:26 by abarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_final_rotate(void)
{
	int		len;
	int		c;
	t_list	*tmp;

	len = ft_lstsize(*ft_stacks(A));
	c = 0;
	tmp = *ft_stacks(A);
	while (tmp->content != ft_stack_min(*ft_stacks(A)))
	{
		c++;
		tmp = tmp->next;
	}
	if (c < len / 2)
	{
		while ((*ft_stacks(A))->content != ft_stack_min(*ft_stacks(A)))
			ft_do_commands(4);
	}
	else
	{
		while ((*ft_stacks(A))->content != ft_stack_min(*ft_stacks(A)))
			ft_do_commands(7);
	}
}

void	ft_pushswap(int	*to_sort, int len)
{	
	(*ft_stacks(A)) = NULL;
	(*ft_stacks(B)) = NULL;
	ft_init(to_sort, len);
	if (len == 3)
	{
		ft_specific_3(to_sort);
		return ;
	}
	ft_final_rotate();
	ft_stack_b_init(lis(len + 1, to_sort));
	while ((*ft_stacks(B)))
		ft_sorting();
	ft_final_rotate();
}

int	main(int argc, char **argv)
{
	int	*array;
	int	i;
	int	j;

	if (argc == 1)
		return (0);
	i = 1;
	j = 1;
	array = malloc(sizeof(int) * argc);
	if (!array)
		return (0);
	array[0] = INT_MAX;
	while (i < argc)
	{
		array[i++] = ft_atoi(*(argv + j));
		j++;
	}
	array[i] = 0;
	ft_pushswap(array, argc - 1);
	// ft_list_printer(*ft_stacks(A));
}
