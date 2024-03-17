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

int	ft_rr_cost_b(t_list *a, t_list *b, int num)
{
	int	i;

	i = find_place_in_b(b, num);
	if(i < ft_index(a, num))
		i = ft_index(a, num);
	return (i);
}

int	ft_rrr_cost_b(t_list *a, t_list *b, int num)
{
	int	i;

	i = 0;
	if (find_place_in_b(b, num))
		i = ft_stack_size(b) - ft_index(b, num);
	if ((i < ft_stack_size(a) - ft_index(a, num)) && ft_index(a, num))
		i = ft_stack_size(a) - ft_index(a, num);
	return (i);
}

int	ft_rb_rra_cost_b(t_list *a, t_list *b, int num)
{
	int	i;

	i = find_place_in_b(b, num);
	if (ft_index(a, num))
		i += ft_stack_size(a) - ft_index(a, num);
	return (i);
}

int	ft_rrb_ra_cost_b(t_list *a, t_list *b, int num)
{
	int	i;

	i = 0;
	if (find_place_in_b(b, num))
		i = ft_stack_size(b) - ft_index(b, num);
	i += ft_index(a, num);
	return (i);
}

int	all_cost_b(t_list *a, t_list *b)
{
	int	i;
	t_list *temp;

	temp = a;
	i = ft_rrr_cost_b(a, b, *(int *)temp->content);
	while (temp)
	{
		if (i > ft_rr_cost_b(a, b, *(int *)temp->content))
			i = ft_rr_cost_b(a, b, *(int *)temp->content);
		if (i > ft_rrr_cost_b(a, b, *(int *)temp->content))
			i = ft_rrr_cost_b(a, b, *(int *)temp->content);
		if (i > ft_rb_rra_cost_b(a, b, *(int *)temp->content))
			i = ft_rb_rra_cost_b(a, b, *(int *)temp->content);
		if (i > ft_rrb_ra_cost_b(a, b, *(int *)temp->content))
			i = ft_rrb_ra_cost_b(a, b, *(int *)temp->content);
		temp = temp->next;
	}
	return (i);
}