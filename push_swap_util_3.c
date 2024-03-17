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

int	find_place_in_a(t_list *a, int num)
{
	t_list	*temp;
	int		i;

	i = 1;
	if (num > (*(int *)a->content) && (*(int *)(ft_lstlast(a)->content)) > num)
		i = 0;
	else if (num < ft_max(a) || num > ft_min(a))
		i = ft_index(a, ft_max(a));
	else
	{
		temp = a->next;
		while (num > *(int *)a->content || num < *(int *)temp->content)
		{
			a = a->next;
			temp = temp->next;
			i++;
		}
	}
	return (i);
}

int	find_place_in_b(t_list *b, int num)
{
	t_list	*temp;
	int		i;

	i = 1;
	if (num > *(int *)b->content && num < *(int *)ft_lstlast(b)-> content)
		i = 0;
	else if (num < ft_max(b) || num > ft_min(b))
		i = ft_index(b, ft_max(b));
	else
	{
		temp = b->next;
		while (num > *(int *)b->content || num < *(int *)temp->content)
		{
			temp = temp->next;
			b = b->next;
			i++;
		}
	}
	return (i);
}

int	ft_stack_size(t_list *node)
{
	int i;

	i = 0;
	while (node)
	{
		node = node->next;
		i++;
	}
	return (i);
}