/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:59:25 by ametta            #+#    #+#             */
/*   Updated: 2020/12/10 09:33:27 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%u\n", ft_strncmp(argv[1], argv[2], 3));
		printf("%u\n", strncmp(argv[1], argv[2], 3));
	}
	return (0);
}
