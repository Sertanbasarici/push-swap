/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:39:22 by sebasari          #+#    #+#             */
/*   Updated: 2024/03/26 18:58:22 by sebasari         ###   ########.fr       */
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

void	ft_converter_t1(t_list **a, char **ch)
{
	int		i;
	int		num;
	char	**str;

	str = ft_rev(ch);
	ft_free_split(ch);
	i = 1;
	num = 0;
	while (str[i])
	{
		num = ft_atoi(str[i]);
		if (num == 0)
			ft_numbercheck(str[i]);
		ft_error(a, str[i], num);
		ft_push(a, num);
		i++;
	}
	num = ft_atoi(str[0]);
	if (num == 0)
		ft_numbercheck(str[0]);
	ft_error(a, str[0], num);
	ft_free_index(str);
}

void	ft_converter_t2(t_list **a, char **ch)
{
	int		i;
	int		num;
	char	**str;
	int		j;

	j = 0;
	str = ft_rev(ch);
	j = ft_strlen_extended(str);
	i = 1;
	num = 0;
	while (i < j - 1)
	{
		num = ft_atoi(str[i]);
		if (num == 0)
			ft_numbercheck(str[i]);
		ft_error(a, str[i], num);
		ft_push(a, num);
		i++;
	}
	num = ft_atoi(str[0]);
	if (num == 0)
		ft_numbercheck(str[0]);
	ft_error(a, str[0], num);
	ft_free_index(str);
}
