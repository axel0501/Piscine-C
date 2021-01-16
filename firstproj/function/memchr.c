/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 12:54:17 by ametta            #+#    #+#             */
/*   Updated: 2021/01/12 13:01:35 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && (unsigned char)c != ((unsigned char*)s)[i])
		i++;
	if (i == n)
		return (NULL);
	return ((void*)s + i);
}
