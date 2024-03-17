/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:38:58 by sebasari          #+#    #+#             */
/*   Updated: 2024/03/04 12:44:23 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_alg(t_list **a, t_list **b)
{
	int	i;

	while (ft_stack_size(*a) > 3 && !ft_sorted(*a))
	{
		i = all_cost_b(a, b);
		while (i >= 0)
		{
			if (i > ft_rr_cost_b(a, b, *(int *)(*a)->content))
				i = to_do_rr_a(a, b, *(int *)(*a)->content);
			else if (i > ft_rrr_cost_b(a, b, *(int *)(*a)->content))
				i = to_do_rrr_a(a, b, *(int *)(*a)->content);
			else if (i > ft_rb_rra_cost_b(a, b, *(int *)(*a)->content))
				i = to_do_rb_rra_a(a, b, *(int *)(*a)->content);
			else if (i > ft_rrb_ra_cost_b(a, b, *(int *)(*a)->content))
				i = to_do_rrb_ra_a(a, b, *(int *)(*a)->content);
			else
				(*a) = (*a)->next;
		}
	}
}

void	*b_stack(t_list **a, t_list **b)
{
	if (!ft_sorted(*a) || ft_stack_size(*a) > 3)
		pb(a, b);
	if (!ft_sorted(*a) || ft_stack_size(*a) > 3)
		pb(a, b);
	if (!ft_sorted(*a) || ft_stack_size(*a) > 3)
		ft_alg(a, b);
	if (!ft_sorted(*a))
		ft_sort3(a);
}

void	ft_sort3(t_list **a)
{
	t_list	*temp;

	temp = *a;
	while (!ft_sorted(*a))
	{
		if (*(int *)(*a)->content != ft_max(*a) && *(int *)(*a)->content != ft_min(*a))
		{
			temp = temp->next;
			if (*(int *)(temp)->content == ft_max(*a))
				rra(a);
			else
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
			sa(a);
			ra(a);
		}
	}
}

void	ft_sort(t_list **a)
{
	t_list *b;

	b = NULL;
	if (ft_stack_size(*a) == 2 && !ft_sorted(*a))
		sa(a);
	else if (ft_stack_size((*a)) < 4)
		ft_sort3(a);
	else
	{
		b_stack(a, b);
	}
}