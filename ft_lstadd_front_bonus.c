/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:18:47 by sebasari          #+#    #+#             */
/*   Updated: 2024/02/18 14:52:42 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}

// #include <stdio.h>
/*int main()
{
	t_list	*lst;
	t_list	*new;
	new = (t_list *)malloc(sizeof(t_list));
	lst = (t_list *)malloc(sizeof(t_list));
	new -> content = (void *)42;
	lst -> content = (void *)43;
	lst -> next = NULL;
	ft_lstadd_front(&lst, new);
	printf("%d ", (int)lst -> content);
}*/