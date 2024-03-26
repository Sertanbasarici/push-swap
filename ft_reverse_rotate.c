/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:39:22 by sebasari          #+#    #+#             */
/*   Updated: 2024/03/26 17:05:05 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_list **node)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (!node || !(*node) || (ft_lstsize(*node) == 1))
		return ;
	tmp = (*node);
	while ((*node)->next->next != NULL)
		(*node) = (*node)->next;
	(*node)->next->next = tmp;
	tmp1 = (*node);
	tmp1 = tmp1->next;
	(*node)->next = NULL;
	(*node) = tmp1;
}

void	rra(t_list	**a)
{
	if (!(a) || !(*a))
		return ;
	ft_reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_list	**b)
{
	if (!(b) || !(*b))
		return ;
	ft_reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	if (!(a) || !(*a) || !(b) || !(*b))
		return ;
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	ft_printf("rrr\n");
}
