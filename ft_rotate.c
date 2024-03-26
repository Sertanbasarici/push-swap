/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:39:22 by sebasari          #+#    #+#             */
/*   Updated: 2024/03/26 17:03:22 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **node)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = (*node);
	tmp1 = (*node)->next;
	while ((*node)->next != NULL)
		(*node) = (*node)->next;
	tmp->next = NULL;
	(*node)->next = tmp;
	(*node) = tmp1;
}

void	ra(t_list **a)
{
	if (!(a) || !(*a))
		return ;
	ft_rotate(a);
	ft_printf("ra\n");
}

void	rb(t_list **b)
{
	if (!(b) || !(*b))
		return ;
	ft_rotate(b);
	ft_printf("rb\n");
}

void	rr(t_list **a, t_list **b)
{
	if (!(*a) || !(*b))
		return ;
	ft_rotate(a);
	ft_rotate(b);
	ft_printf("rr\n");
}
