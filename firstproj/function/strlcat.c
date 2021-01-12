/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:26:55 by ametta            #+#    #+#             */
/*   Updated: 2021/01/12 15:49:27 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	if (dstsize < i)
	{
		while (src[i] != '\0')
			j++;
		return (dstsize + j);
	}
	while (dstsize > 0 && i < dstsize - 1 && src[i])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	while (src[j] != '\0')
	{
		j++;
		i++;
	}
	return (i);
}
