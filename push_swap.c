/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:38:58 by sebasari          #+#    #+#             */
/*   Updated: 2024/03/26 20:21:31 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argn, char **argv)
{
	t_list	*a;
	char	**str;

	if (argn == 1)
		return (0);
	a = NULL;
	str = NULL;
	if (argn > 2)
	{
		a = ft_list_init(argn, argv);
		ft_converter_t1(&a ,argv, 1);
	}
	else
	{
		str = ft_split(argv[1], ' ');
		a = ft_list_init(argn, str);
		ft_converter_t1(&a ,str , 0);
		ft_free_split(str);
	}
	ft_print(a);
	ft_sort(&a);
	ft_print(a);
	ft_free_each_one(a);
	//system("leaks push_swap");
}