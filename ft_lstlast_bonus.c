/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:47:35 by sebasari          #+#    #+#             */
/*   Updated: 2024/02/18 15:19:25 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp -> next != NULL)
		tmp = tmp -> next;
	return (tmp);
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
	node3 = ft_lstlast(node);
	printf("%d ", (int)node3 -> content);
}*/