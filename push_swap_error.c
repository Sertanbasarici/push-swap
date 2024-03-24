/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_control.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebasari <sebasari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:39:22 by sebasari          #+#    #+#             */
/*   Updated: 2024/02/29 16:55:25 by sebasari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	ft_atoi_extended(const char *str)
{
	int			i;
	long long	num;
	int			sign;

	num = 0;
	sign = 1;
	i = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (sign * num);
}

void	ft_error(t_list **node, char *chr, int num)
{
	ft_exceed_check(chr);
	ft_numbercheck(chr);
	ft_duplicates_check(node, num);
}

void	ft_error_print(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_exceed_check(char *chr)
{
	long long	num;

	num = ft_atoi_extended(chr);
	if (num > 2147483647)
		ft_error_print();
	else if (num < -2147483648)
		ft_error_print();
}

void	ft_duplicates_check(t_list **a, int num)
{
	t_list	*iter;

	iter = (*a);
	while (iter -> next != NULL)
	{
		if (*(int *)iter -> content == num)
			ft_error_print();
		iter = iter -> next;
	}
}
