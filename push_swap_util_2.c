/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_util_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:38:58 by sebasari          #+#    #+#             */
/*   Updated: 2024/03/26 17:52:33 by sebasari         ###   ########.fr       */
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

char	**ft_rev(char **str)
{
	char	**s1;
	int		i;
	int		j;

	i = ft_strlen_extended(str);
	j = 0;
	s1 = (char **)malloc(i * sizeof(char *));
	if (!s1)
		return (NULL);
	while (i > 0)
	{
		s1[j] = malloc((sizeof(char) * ft_strlen(str[i -1])));
		if (!str[i - 1])
			return (NULL);
		s1[j] = str[i - 1];
		i--;
		j++;
	}
	s1[j] = NULL;
	return (s1);
}
