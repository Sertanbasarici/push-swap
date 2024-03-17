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

int	ft_rr_cost_a(t_list *a, t_list *b, int num)
{
	int	i;

	i = find_place_in_a(a, num);
	if (i < ft_index(b, num))
		i = ft_index(b, num);
	return (i);
}

int	ft_rrr_cost_a(t_list *a, t_list *b, int num)
{
	int	i;

	i = 0;
	if (i < ft_index(a, num))
		i = ft_stack_size(a) - find_place_in_a(a, num);
	if ((i < ft_stack_size(b) - ft_index(b, num)) && ft_index(b, num))
		i = ft_stack_size(b) - ft_index(b, num);
	return (i);
}

int	ft_ra_rrb_cost_a(t_list *a, t_list *b, int num)
{
	int	i;

	i = 0;
	if (ft_index(b, num))
		i = ft_stack_size(b) - ft_index(b, num);
	i = find_place_in_a(a, num) + i;
	return (i);
}

int	ft_rra_rb_cost_a(t_list *a, t_list *b, int num)
{
	int	i;

	i = 0;
	if (ft_index(a, num))
		i = ft_stack_size(a) - ft_index(a, num);
	i = ft_index(b, num);
	return (i);
}

int	all_cost_a(t_list *a, t_list *b)
{
	t_list	*temp;
	int		i;

	temp = b;
	i = ft_rr_cost_a(a, b, *(int *)temp->content);
	while (temp)
	{
		if (i > ft_rr_cost_a(a, b, *(int *)temp->content))
			i = ft_rr_cost_a(a, b, *(int *)temp->content);
		if (i > ft_rrr_cost_a(a, b, *(int *)temp -> content))
			i = ft_rrr_cost_a(a, b, *(int *)temp -> content);
		if (i > ft_ra_rrb_cost_a(a, b, *(int *)temp->content))
			i = ft_ra_rrb_cost_a(a, b, *(int *)temp->content);
		if (i > ft_rra_rb_cost_a(a, b, *(int *)temp->content))
			i = ft_rra_rb_cost_a(a, b, *(int *)temp->content);
		temp = temp->next;
	}
	return (i);
}