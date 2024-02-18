/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:50 by sebasari          #+#    #+#             */
/*   Updated: 2024/02/18 16:06:33 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	tmp = *lst;
	if (!tmp)
		tmp = new;
	else
	{
		while (tmp -> next != NULL)
			tmp = tmp -> next;
		new -> next = tmp -> next;
		tmp -> next = new;
	}
}

/*#include <stdio.h>
int main()
{
	t_list *node;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	node = (t_list *)malloc(sizeof(t_list));
	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	node3 = (t_list *)malloc(sizeof(t_list));
		node -> content = (void *)0;
		node -> next = node1;
		node1 -> content = (void *)10;
		node1 -> next = node2;
		node2 -> content = (void *)20;
		node2 -> next = NULL;
		node3 -> content = (void *)11;
		ft_lstadd_back(&node, node3);
		ft_lstlast(node);
	printf("%d ", (int)node -> content);
}*/