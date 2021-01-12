/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:40:47 by ametta            #+#    #+#             */
/*   Updated: 2021/01/12 16:44:27 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
	
	return 0;
}

void main_for_bzero()
{
	char str[] = "ciao come stai?";
	int n = 3;
	printf("before: %s", str);
	ft_bzero(str, n);
	printf("\nafter: %s", str);
}
