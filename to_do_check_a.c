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

int	to_do_rr_a(t_list **a, t_list **b, int num)
{
	while (*(int *)(*a)->content != num && find_place_in_b(*b, num) > 0)
		rr(a, b);
	while (*(int *)(*a)->content != num)
		ra(a);
	while (find_place_in_b(*b, num) > 0)
		rb(b);
	pb(a, b);
	return (-1);
}

int	to_do_rrr_a(t_list **a, t_list **b, int num)
{
	while (*(int *)(*a)->content != num && find_place_in_b(*b, num) > 0)
		rrr(a, b);
	while (*(int *)(*a)->content != num)
		rra(a);
	while (find_place_in_b(*b, num) > 0)
		rrb(b);
	pb(a, b);
	return (-1);
}

int	to_do_ra_rrb_a(t_list **a, t_list **b, int num)
{
	while (*(int *)(*a)->content != num)
		ra(a);
	while (find_place_in_b(*b, num) > 0)
		rrb(b);
	pb(a, b);
	return (-1);
}

int	to_do_rra_rb_a(t_list **a, t_list **b, int num)
{
	while (*(int *)(*a)->content != num)
		rra(a);
	while (find_place_in_b(*b, num) > 0)
		rb(b);
	pb(a, b);
	return (-1);
}
