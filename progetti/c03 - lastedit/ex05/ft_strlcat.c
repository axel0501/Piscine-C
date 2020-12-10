/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:40:44 by ametta            #+#    #+#             */
/*   Updated: 2020/12/02 16:10:06 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	int dest_len;

	i = 0;
	j = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while ((j < size - dest_len - 1) && (src[i] != '\0'))
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest_len + i);
}
