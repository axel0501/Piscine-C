/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:33:20 by ametta            #+#    #+#             */
/*   Updated: 2020/11/30 17:47:47 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int count;

	count = 0;
	while (dest[count] != '\0' && count < n)
		src[count] = dest[count++];
	src[count] = '\0';
}
