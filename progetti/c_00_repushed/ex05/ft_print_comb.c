/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:37:16 by ametta            #+#    #+#             */
/*   Updated: 2020/12/03 11:19:07 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print(int a, int b, int c)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
}

void	ft_print_comb(void)
{
	int num1;
	int num2;
	int num3;

	num1 = 0;
	while (num1 <= 9)
	{
		num2 = num1 + 1;
		while (num2 <= 9)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				ft_print(num1, num2, num3);
				if (num1 != 7 || num2 != 8 || num3 != 9)
					ft_print_comma();
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
