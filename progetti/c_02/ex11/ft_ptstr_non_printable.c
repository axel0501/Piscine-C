/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptstr_non_printable.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:28:27 by ametta            #+#    #+#             */
/*   Updated: 2020/12/02 11:21:38 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char dec)
{
	char hex1;
	char hex2;
	hex1 = dec / 16;
	hex2 = dec % 16;
	if (hex1 < 10)
		ft_putchar(hex1 + 48);
	else
		ft_putchar(hex1 + 87);
	if (hex2 < 10)
		ft_putchar(hex2 + 48);
	else
		ft_putchar(hex2 + 87);
}

void	ft_putstr_non_printable(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] > 31 && str[count] != 127)
			ft_putchar(str[count]);
		else
		{
			ft_putchar('\\');
			ft_print_hex(str[count]);
		}
		count++;
	}
}
