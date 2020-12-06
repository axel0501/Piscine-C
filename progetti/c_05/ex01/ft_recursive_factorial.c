/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:10:22 by ametta            #+#    #+#             */
/*   Updated: 2020/12/06 12:23:09 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if(nb < 0)
		return(0);
	if(nb == 0 || nb == 1)
		return(1);
	return nb * ft_recursive_factorial(nb - 1);
}
