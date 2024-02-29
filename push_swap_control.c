/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:39:22 by sebasari          #+#    #+#             */
/*   Updated: 2024/02/17 19:04:54 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **node)
{
	if (!node || !(*node))
		return ;
	t_list  *tmp;
	t_list  *tmp1;
	t_list  *tmp2;
	tmp2 = (*node) -> next -> next;
	tmp1 = (*node) -> next;
	tmp = (*node);
	(*node) -> next -> next= tmp;
	(*node) -> next = tmp2;
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
	if (!(b) || !(*b) || !(a) || !(*a))
		return ;
	ft_swap(a);
	ft_swap(b);
	ft_printf("ss\n");
}

void	pa(t_list **a, t_list **b)
{
	if (!a || !(*a) || !(b) || !(*b))
		return ;
	t_list	*tmp;
	tmp = (*b);
	(*b) -> next = (*a);
	(*a) = tmp;
}

void	pb(t_list **b, t_list **a)
{
	if (!(a) || !(*a) || !(b) || !(*b))
	return ;
	t_list	*tmp;
	tmp = (*a);
	(*a) -> next = (*b);
	(*b) = tmp;
}

void	ft_rotate(t_list **node)
{
	if (!node || !(*node))
		return ;
	t_list	*tmp;
	tmp = (*node);
	while ((*node) -> next != NULL)
		(*node) = (*node) -> next;
	tmp -> next = (*node) -> next;
	(*node) -> next = tmp;
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
	if (!(a) || !(*a) || (b) || (*b))
		return ;
	ft_rotate(a);
	ft_rotate(b);
	ft_printf("rr\n");
}

void	ft_reverse_rotate(t_list **node)
{
	if (!node || !(*node))
		return ;
	t_list *tmp;
	tmp = (*node);
	while ((*node) -> next -> next != NULL)
		(*node) = (*node) -> next;
	(*node) -> next -> next = tmp;
	(*node) -> next = NULL;
}
