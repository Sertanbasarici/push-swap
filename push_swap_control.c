/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_control.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:39:22 by sebasari          #+#    #+#             */
/*   Updated: 2024/02/29 16:55:25 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **node)
{
	if (!node || !(*node) || (ft_lstsize(*node) == 1))
		return ;
	t_list	*tmp;
	t_list	*tmp1;
	t_list	*tmp2;
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
	if (!(*b))
		return ;
	ft_swap(a);
	ft_swap(b);
	ft_printf("ss\n");
}

void	pa(t_list **a, t_list **b)
{
	if (!(*a)) 
		return ;
	t_list	*tmp;
	t_list	*tmp1;

	tmp1 = (*b)->next;
	tmp = (*b);
	(*b) -> next = (*a);
	(*a) = tmp;
	(*b) = tmp1;
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	if (!(*a))
		return ;
	t_list	*tmp;
	t_list	*tmp1;
	tmp = (*a);
	tmp1 = (*a)->next;
	(*a) -> next = (*b);
	(*b) = tmp;
	(*a)= tmp1;
	ft_printf("pb\n");
}

void	ft_rotate(t_list **node)
{
	t_list	*tmp;
	t_list	*tmp1;
	tmp = (*node);
	tmp1 = (*node) -> next;
	while ((*node) -> next != NULL)
		(*node) = (*node) -> next;
	tmp -> next = NULL;
	(*node) -> next = tmp;
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

void	ft_reverse_rotate(t_list **node)
{
	if (!node || !(*node) || (ft_lstsize(*node) == 1))
		return ;
	t_list	*tmp;
	t_list	*tmp1;
	tmp = (*node);
	while ((*node) -> next -> next != NULL)
		(*node) = (*node) -> next;
	(*node) -> next -> next = tmp;
	tmp1 = (*node);
	tmp1 = tmp1 -> next; 
	(*node) -> next = NULL;
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