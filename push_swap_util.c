/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:39:22 by sebasari          #+#    #+#             */
/*   Updated: 2024/03/04 14:53:43 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	del(void * content)
{
	free(content);
}

void	ft_push(t_list **head, int data)
{
	t_list *new;
	new = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return ;
	ft_lstadd_front(head, new);
	new -> content = (void *)data;
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

void	ft_converter(t_list **a, char **ch)
{
	int	i;
	int	num;

	i = 0;
	while (ch[i] != NULL)
	{
		num = ft_atoi(ch[i]);
		ft_push(a, num);
	}
}
