/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:39:25 by sebasari          #+#    #+#             */
/*   Updated: 2024/03/04 14:47:18 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

//	util_1
void		ft_converter_t1(t_list **a, char **ch);
void		ft_converter_t2(t_list **a, char **ch);
int			ft_pop(t_list **head);
void		ft_push(t_list **head, int data);
void		del(void * content);
void		ft_exceed_check(char	*chr);
void		ft_error_print(void);
void		ft_duplicates_check(t_list **a, int num);
void		ft_check_int(char *chr);
void		ft_error(t_list **node, char *chr, int num);
long long	ft_atoi_extended(const char *str);
void		ft_print(t_list *node);
void		ft_numbercheck(char *str);
t_list		*ft_list_init(int argn, char **argv);
void		ft_converter_t1(t_list **a, char **ch);
void		ft_converter_t2(t_list **a, char **ch);
void		ft_diffromnum(char *str);

// util_2
int			ft_min(t_list *node);
int			ft_max(t_list *node);
int			ft_index(t_list *node, int num);
int			ft_sorted(t_list *node);

// util_3
int	find_place_in_b(t_list *b, int num);
int	find_place_in_a(t_list *a, int num);
int	ft_stack_size(t_list *node);

// check_a
int	ft_rr_cost_a(t_list *a, t_list *b, int num);
int	ft_rrr_cost_a(t_list *a, t_list *b, int num);
int	ft_ra_rrb_cost_a(t_list *a, t_list *b, int num);
int	ft_rra_rb_cost_a(t_list *a, t_list *b, int num);
int	all_cost_a(t_list *a, t_list *b);

//check b
int	ft_rr_cost_b(t_list *a, t_list *b, int num);
int	ft_rrr_cost_b(t_list *a, t_list *b, int num);
int	ft_rb_rra_cost_b(t_list *a, t_list *b, int num);
int	ft_rrb_ra_cost_b(t_list *a, t_list *b, int num);
int	all_cost_b(t_list *a, t_list *b);

//todo a
int	to_do_rr_a(t_list **a, t_list **b, int num);
int	to_do_rrr_a(t_list **a, t_list **b, int num);
int	to_do_ra_rrb_a(t_list **a, t_list **b, int num);
int	to_do_rra_rb_a(t_list **a, t_list **b, int num);

//todo b
int	to_do_rr_b(t_list **a, t_list **b, int num);
int	to_do_rrr_b(t_list **a, t_list **b, int num);
int	to_do_rb_rra_b(t_list **a, t_list **b, int num);
int	to_do_rrb_ra_b(t_list **a, t_list **b, int num);

//sort
void	ft_sort(t_list **a);

// commends
void	rrr(t_list **a, t_list **b);
void	rrb(t_list	**b);
void	rra(t_list	**a);
void	ft_reverse_rotate(t_list **node);
void	rr(t_list **a, t_list **b);
void	rb(t_list **b);
void	ra(t_list **a);
void	ft_rotate(t_list **node);
void	pb(t_list **b, t_list **a);
void	pa(t_list **a, t_list **b);
void	ss(t_list **a, t_list **b);
void	sb(t_list **b);
void	sa(t_list **a);
void	ft_swap(t_list **node);

#endif