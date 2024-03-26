/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:39:22 by sebasari          #+#    #+#             */
/*   Updated: 2024/03/26 17:09:23 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **node)
{
	t_list	*tmp;
	t_list	*tmp1;
	t_list	*tmp2;

	if (!node || !(*node) || (ft_lstsize(*node) == 1))
		return ;
	tmp2 = (*node)->next->next;
	tmp1 = (*node)->next;
	tmp = (*node);
	(*node)->next->next = tmp;
	(*node)->next = tmp2;
	*node = tmp1;
}

void	sa(t_list **a)
{
	if (!(a) || !(*a))
		return ;
	ft_swap(a);
	ft_printf("sa\n");
}

void	sb(t_list **b)
{
	if (!(b) || !(*b))
		return ;
	ft_swap(b);
	ft_printf("sb\n");
}

void	ss(t_list **a, t_list **b)
{
	if (!(*b))
		return ;
	ft_swap(a);
	ft_swap(b);
	ft_printf("ss\n");
}
