/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_util_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:38:58 by sebasari          #+#    #+#             */
/*   Updated: 2024/03/26 19:53:31 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_list *node)
{
	int	min;

	min = *(int *)node -> content;
	while (node)
	{
		if (min > *(int *)node->content)
			min = *(int *)node->content;
		node = node->next;
	}
	return (min);
}

int	ft_max(t_list *node)
{
	int	max;

	max = *(int *)node->content;
	while (node)
	{
		if (max < *(int *)node->content)
			max = *(int *)node->content;
		node = node->next;
	}
	return (max);
}

int	ft_index(t_list *node, int num)
{
	int	i;

	i = 0;
	while (node != NULL && (*(int *)node->content) != num)
	{
		i++;
		node = node -> next;
	}
	return (i);
}

int	ft_sorted(t_list *node)
{
	int	num;

	num = *(int *)node->content;
	while (node)
	{
		if (num > *(int *)node->content)
			return (0);
		num = *(int *)node->content;
		node = node->next;
	}
	return (1);
}
