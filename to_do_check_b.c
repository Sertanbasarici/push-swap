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

int	to_do_rr_b(t_list **a, t_list **b, int num)
{
	while (*(int *)(*b)->content != num && find_place_in_a(*a, num) > 0)
		rr(a, b);
	while (*(int *)(*b)->content != num)
		rb(b);
	while (find_place_in_a(*a, num) > 0)
		ra(a);
	pa(a, b);
	return (-1);
}

int	to_do_rrr_b(t_list **a, t_list **b, int num)
{
	while (*(int *)(*b)->content != num && find_place_in_a(*a, num) > 0)
		rrr(a, b);
	while (*(int *)(*b)->content != num)
		rrb(b);
	while (find_place_in_a(*a, num) > 0)
		rra(a);
	pa(a, b);
	return (-1);
}

int	to_do_rb_rra_b(t_list **a, t_list **b, int num)
{
	while (find_place_in_a(*a, num) > 0)
		rra(a);
	while (*(int *)(*b)->content != num)
		rb(b);
	pa(a, b);
	return (-1);
}

int	to_do_rrb_ra_b(t_list **a, t_list **b, int num)
{
	while (find_place_in_a(*a, num) > 0)
		ra(a);
	while (*(int *)(*b)->content != num)
		rrb(b);
	pa(a, b);
	return (-1);
}
