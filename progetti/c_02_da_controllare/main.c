/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 12:21:40 by ametta            #+#    #+#             */
/*   Updated: 2020/12/07 15:21:16 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	printf("%d\n%d", ft_strcmp("mondo", "ciao"), strcmp("mondo", "ciao"));
}
