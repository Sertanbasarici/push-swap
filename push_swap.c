/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:38:58 by sebasari          #+#    #+#             */
/*   Updated: 2024/03/26 18:57:56 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argn, char **argv)
{
	t_list	*a;
	char	**str;

	if (argn == 1)
		return (0);
	if (argn > 2)
	{
		a = ft_list_init(argn, argv);
		ft_converter_t2(&a ,argv);
	}
	else
	{
		str = ft_split(argv[1], ' ');
		a = ft_list_init(argn, str);
		ft_converter_t1(&a ,str);
	}
	ft_sort(&a);
	ft_free_each_one(a);
	system("leaks push_swap");
}