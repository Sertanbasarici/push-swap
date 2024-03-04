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

void	ft_converter(t_list **a, char **ch);
int		ft_pop(t_list **head);
void	ft_push(t_list **head, void * data);
void	del(void * content);

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