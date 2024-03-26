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
	char	**str;

	if (argn == 1)
		return (0);
	a = ft_list_init(argn, argv);
	if (argn > 2)
		ft_converter_t2(&a ,argv);
	else
	{
		str = ft_split(argv[1], ' ');
		ft_converter_t1(&a ,str);
		ft_free_split(str);
	}
	ft_print(a);
	ft_sort(&a);
	ft_free_each_one(a);
}