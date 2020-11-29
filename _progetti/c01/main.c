/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 17:03:56 by ametta            #+#    #+#             */
/*   Updated: 2020/11/29 18:40:32 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_swap(int *a, int *b);

int			main(void)
{
	int a;
	int b;

	a = 5;
	b = 0;
	ft_swap(&a, &b);
	ft_putchar(a + 48);
	ft_putchar('\n');
	ft_putchar(b + 48);
	ft_putchar('\n');
}
