/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:45:34 by ametta            #+#    #+#             */
/*   Updated: 2020/12/03 11:16:13 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_num4(char num1, char num2, char num3, char num4)
{
	while (num4++ < 9)
	{
		if (((num1 * 10) + num2) < ((num3 * 10) + num4))
		{
			ft_putchar(num1 + 48);
			ft_putchar(num2 + 48);
			ft_putchar(' ');
			ft_putchar(num3 + 48);
			ft_putchar(num4 + 48);
			if (num1 != 9 || num2 != 8 || num3 != 9 || num4 != 9)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

void	ft_print_comb2(void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	num1 = 0 - 1;
	while (num1++ < 9)
	{
		num2 = 0 - 1;
		while (num2++ < 9)
		{
			num3 = 0 - 1;
			while (num3++ < 9)
			{
				num4 = 0 - 1;
				ft_num4(num1, num2, num3, num4);
			}
		}
	}
}
