/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:41:22 by ametta            #+#    #+#             */
/*   Updated: 2020/11/26 13:36:15 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_num4(char num1, char num2, char num3, char num4)
{
	num4 = '0' - 1;
	while (num4++ < '9')
	{
		ft_putchar(num1);
		ft_putchar(num2);
		ft_putchar(' ');
		ft_putchar(num3);
		ft_putchar(num4);
		if (num1 != '9' || num2 != '9' || num3 != '9' || num4 != '9')
			ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char num1;
	char num2;
	char num3;
	char num4;

	num1 = '0' - 1;
	while (num1++ < '9')
	{
		num2 = '0' - 1;
		while (num2++ < '9')
		{
			num3 = '0' - 1;
			while (num3++ < '9')
			{
				ft_num4(num1, num2, num3, num4);
			}
		}
	}
}
