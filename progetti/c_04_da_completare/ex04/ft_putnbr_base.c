/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 11:48:15 by ametta            #+#    #+#             */
/*   Updated: 2020/12/06 11:55:07 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void 	ft_putnbr_base(int nbr, char *base)
{
	char *result;
	if (
}

int		main(int argc, char argv)
{
	int *num = argv[1];
	char *base = argv[2];
	ft_putnbr_base(num, base); 
}
