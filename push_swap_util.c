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

void	del(void * content)
{
	free(content);
}

void	ft_push(t_list **head, void * data)
{
	t_list *new;
	new = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return ;
	ft_lstadd_back(head, new);
	new -> content = data;
}

int	ft_pop(t_list **head)
{
	int data;
	if (!head || !(*head))
		return (0);
	while ((*head) -> next != NULL)
		(*head) = (*head) -> next;
	data = (int)(*head) -> content;
	ft_lstdelone(*head, del);
	return (data);
}

