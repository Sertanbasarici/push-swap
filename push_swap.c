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

int main(int argn, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	**ch;
	a = ft_lstnew(NULL);
	b = ft_lstnew(NULL);
	int i;

	i = 1;
	if (argn > 1)
	{
		if (argn > 2)
		{
			while (argv[i])
			{
				ch[i] = ft_strjoin(argv[i], argv[++i]);
				i++;
			}
			ft_converter(a ,ch);
		}
		else
		{
			ch = ft_split(argv[1], ' ');
			ft_converter(a ,ch);
		}
	}
	ft_printf("Error\n");
	return (0);
}