/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:03:26 by ametta            #+#    #+#             */
/*   Updated: 2021/01/12 13:11:31 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!n)
		return  (0);
	while (i < n && ((unsigned char*)s1)[i] == ((unsigned char*)s1)[i])
		i++;
	if (i == n)
		i--;
	return (((unsigned char*)s1)[i] - ((unsigned char*)s1)[i]); 
}
