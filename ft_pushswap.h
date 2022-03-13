/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbosa <abarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:42:55 by abarbosa          #+#    #+#             */
/*   Updated: 2022/03/13 10:59:18 by abarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <limits.h>
# include "./libft/libft.h"
# include <stdio.h>

typedef enum e_type
{
	A,
	B,
	AB
}			t_type;

void	ft_stack_b_init(t_list *lis_a);
t_list	*ft_list_iversion(int *astack);
void	ft_intarrayprinter(int *array);
t_list	*ft_nlis(void);
t_list	*ft_treat_lis(t_list *lis);
void	ft_sa(void);
void	ft_sb(void);
void	ft_ss(void);
void	ft_pa(void);
void	ft_rrb(void);
int		*ft_list_to_ia(t_list *a_stack);
int		*ft_ia_init(size_t size, int value);
t_list	*ft_inverse_lis(t_list *lis);
void	ft_pb(void);
void	ft_ra(void);
void	ft_rb(void);
void	ft_rr(void);
void	ft_rra(void);
void	ft_rrr(void);
t_list	**ft_stacks(t_type type);
t_list	*ft_lstnew(int content);
void	ft_lst_dellast(t_list **satck);
void	ft_lstpop(t_list **list, t_list *to_pop);
t_list	*ft_lstcpy(t_list *list);
void	ft_list_printer(t_list *astack);
t_list	*ft_steps(t_list *element, int index);
void	ft_init(int *array, int len);
int		ft_check_completion(void);
void	ft_sorting(void);
t_list	*ft_make_step_list(t_list *element, int index);
int		ft_stack_min(t_list	*list);
int		ft_stack_max(t_list *list);
void	ft_do_commands(int command);
t_list	*lis(int len, int *array);
void	ft_reverse_aplier(t_list **b, int dw);
void	ft_duplicate_aplier(t_list	**b, int dw);
void	ft_execution(t_list *command);
void	ft_specific_3(int *array);

#endif