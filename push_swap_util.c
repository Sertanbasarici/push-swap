/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:39:22 by sebasari          #+#    #+#             */
/*   Updated: 2024/03/26 20:18:13 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **head, int data)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!head || !(*head) || !(new))
		return ;
	new -> content = malloc(sizeof(int));
	if (!(new -> content))
	{
		ft_lstdelone(new, &del);
		return ;
	}
	ft_lstadd_front(head, new);
	*(int *)new -> content = data;
}

void	ft_print(t_list *node)
{
	t_list	*iter;

	iter = (node);
	while (iter != NULL)
	{
		ft_printf("%d ", *((int *)(iter -> content)));
		iter = iter -> next;
	}
}

t_list	*ft_list_init(int argn, char **argv)
{
	t_list	*node;
	int		data;

	if (argn > 2)
		data = ft_atoi(argv[ft_strlen_extended(argv) - 1]);
	else
		data = ft_atoi(argv[ft_strlen_extended(argv) - 1]);
	node = malloc(sizeof(t_list));
	node -> content = malloc(sizeof(int));
	if (!(node) || !(node -> content))
		return (NULL);
	*(int *) node -> content = data;
	node->next = NULL;
	return (node);
}

void	ft_converter_t1(t_list **a, char **ch, int j)
{
	int		i;
	int		num;

	i = ft_strlen_extended(ch) - 2;
	num = 0;
	while (i >= j)
	{
		num = ft_atoi(ch[i]);
		if (num == 0)
			ft_numbercheck(ch[i]);
		ft_error(a, ch[i], num);
		ft_push(a, num);
		i--;
	}
	num = ft_atoi(ch[ft_strlen_extended(ch) - 1]);
	if (num == 0)
		ft_numbercheck(ch[ft_strlen_extended(ch) - 1]);
	ft_error(a, ch[ft_strlen_extended(ch) - 1], num);
}
