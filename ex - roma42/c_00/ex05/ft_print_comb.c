/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:37:16 by ametta            #+#    #+#             */
/*   Updated: 2020/11/26 12:38:05 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char num1;
	char num2;
	char num3;

	num1 = '0' - 1;
	while (num1++ < '9')
	{
		num2 = num1;
		while (num2++ < '9')
		{
			num3 = num2;
			while (num3++ < '9')
			{
				if (num1 != '0' || num2 != '1' || num3 != '2')
					ft_putchar(',');
				if (num1 != '0' || num2 != '1' || num3 != '2')
					ft_putchar(' ');
				ft_putchar(num1);
				ft_putchar(num2);
				ft_putchar(num3);
			}
		}
	}
	ft_putchar('\n');
}
