/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:13:51 by sebasari          #+#    #+#             */
/*   Updated: 2024/02/18 14:52:24 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	tmp = lst;
	i = 0;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp -> next;
	}
	return (i);
}

// #include <stdio.h>
/*int main()
{
	t_list *node;
	t_list *node1;
	t_list *node2;
	node = (t_list *)malloc(sizeof(t_list));
	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
		node -> content = (void *)0;
		node -> next = node1;
		node1 -> content = (void *)10;
		node1 -> next = node2;
		node2 -> content = (void *)20;
		node2 -> next = NULL;
	int num = ft_lstsize(node);
	printf("%d ", num);
}*/