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

void	print(int a, int r)
{
	int i;

	i = 0;
	while (i < r)
	{
		write(1, &a[i], 1);
		i++;
	}
}

int	iniz_array(int array, int r)
{
	int array[r];
	int count;

	i = 0;
	while (i < r)
	{
		array[i] = 0;
		i++;
	}
	return (array, n);
}

void	ft_print_combn(int n)
{
	int a[n];
	int i;
	int j;

	i = 0;
	j = n + 1;
	iniz_array(a, n)
	while (i < n)
	{
		while (j > 0)
		{
			a[j]++;
			j--;
		}
		i++;
	}
}

int main(void)
{
	int nbr = 2;
	ft_print_combn(nbr);
}
