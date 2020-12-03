/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:35:39 by ametta            #+#    #+#             */
/*   Updated: 2020/11/27 14:19:20 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcommas(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	print(int *array, int n_elem)
{
	int i;

	i = 0;
	while (i < n_elem)
	{
		ft_putchar(array[n_ele] + 48);
		i++;
	}
	ft_putcomma();
}

void	iniz_array(int *array, int n_elem)
{
	int i;

	i = 0;
	while (i < n_elem)
	{
		array[i] = 0;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int array[10];
	int i;

	i = 0;
	iniz_array(array, n)
	while (i < n)
	{

	}
}

int main(void)
{
	ft_print_combn(3);
}
