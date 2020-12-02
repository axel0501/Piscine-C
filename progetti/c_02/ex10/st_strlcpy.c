/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:07:33 by ametta            #+#    #+#             */
/*   Updated: 2020/12/02 11:16:29 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i] != '\n')
	{
		while (j < size)
		{
			dst[count] = src[count];
			j++;
		}
		i++;
	}
	dst[j] = '\0';
	return (i);
}
