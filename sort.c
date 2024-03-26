/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:38:58 by sebasari          #+#    #+#             */
/*   Updated: 2024/03/26 17:13:57 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	design_b(t_list **a, t_list **b)
{
	int		i;
	t_list	*temp;

	while (ft_stack_size(*a) > 3 && !ft_sorted(*a))
	{
		temp = *a;
		i = cost_b(*a, *b);
		while (i >= 0)
		{
			if (i == ft_rr_cost_b(*a, *b, *(int *)(temp)->content))
				i = to_do_rr_a(a, b, *(int *)(temp)->content);
			else if (i == ft_rrr_cost_b(*a, *b, *(int *)(temp)->content))
				i = to_do_rrr_a(a, b, *(int *)(temp)->content);
			else if (i == ft_rb_rra_cost_b(*a, *b, *(int *)(temp)->content))
				i = to_do_rra_rb_a(a, b, *(int *)(temp)->content);
			else if (i == ft_rrb_ra_cost_b(*a, *b, *(int *)(temp)->content))
				i = to_do_ra_rrb_a(a, b, *(int *)(temp)->content);
			else
				temp = temp->next;
		}
	}
}

t_list	**design_a(t_list **a, t_list **b)
{
	int		i;
	t_list	*temp;

	while (*b)
	{
		temp = *b;
		i = cost_a(*a, *b);
		while ((*b) != NULL && i >= 0)
		{
			if (i == ft_rr_cost_a(*a, *b, *(int *)(temp)->content))
				i = to_do_rr_b(a, b, *(int *)(temp)->content);
			else if (i == ft_rrr_cost_a(*a, *b, *(int *)(temp)->content))
				i = to_do_rrr_b(a, b, *(int *)(temp)->content);
			else if (i == ft_ra_rrb_cost_a(*a, *b, *(int *)(temp)->content))
				i = to_do_rrb_ra_b(a, b, *(int *)(temp)->content);
			else if (i == ft_rra_rb_cost_a(*a, *b, *(int *)(temp)->content))
				i = to_do_rb_rra_b(a, b, *(int *)(temp)->content);
			else
				temp = temp -> next;
		}
	}
	return (a);
}

t_list	*b_stack(t_list **a)
{
	t_list	*b;

	b = NULL;
	if (!ft_sorted(*a) || ft_stack_size(*a) > 3)
		pb(a, &b);
	if (!ft_sorted(*a) || ft_stack_size(*a) > 3)
		pb(a, &b);
	if (!ft_sorted(*a) || ft_stack_size(*a) > 3)
		design_b(a, &b);
	if (!ft_sorted(*a))
		ft_sort3(a);
	return (b);
}

void	ft_sort3(t_list **a)
{
	t_list	*temp;

	temp = *a;
	while (!ft_sorted(*a))
	{
		if (ft_min(*a) == *(int *)(*a)->content)
		{
			rra(a);
			sa(a);
		}
		else if (*(int *)(*a)->content == ft_max(*a))
		{
			ra(a);
			if (!ft_sorted(*a))
				sa(a);
		}
		else
		{
			temp = temp->next;
			if (*(int *)(temp)->content == ft_max(*a))
				rra(a);
			else
				sa(a);
		}
	}
}

void	ft_sort(t_list **a)
{
	t_list	*b;
	int		i;

	b = NULL;
	if (ft_stack_size(*a) == 2 && !ft_sorted(*a))
		sa(a);
	else if (!ft_sorted(*a))
	{
		b = b_stack(a);
		a = design_a(a, &b);
		i = ft_index(*a, ft_min(*a));
		if (i < ft_stack_size(*a) - i)
		{
			while (*(int *)(*a)->content != ft_min(*a))
				ra(a);
		}
		else
		{
			while (*(int *)(*a)->content != ft_min(*a))
				rra(a);
		}
	}
}
