/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:48:00 by ametta            #+#    #+#             */
/*   Updated: 2020/12/03 11:52:20 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int count;

	count = 0;
	while (count <= size / 2)
	{
		temp = tab[size - 1 - count];
		tab[size - 1 - count] = tab[count];
		tab[count] = temp;
		count++;
	}
}
