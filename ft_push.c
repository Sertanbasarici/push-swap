/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:39:22 by sebasari          #+#    #+#             */
/*   Updated: 2024/03/26 17:07:36 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (!(*a))
		return ;
	tmp1 = (*b)->next;
	tmp = (*b);
	(*b)->next = (*a);
	(*a) = tmp;
	(*b) = tmp1;
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (!(*a))
		return ;
	tmp = (*a);
	tmp1 = (*a)->next;
	(*a)->next = (*b);
	(*b) = tmp;
	(*a) = tmp1;
	ft_printf("pb\n");
}
