/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:25:36 by ametta            #+#    #+#             */
/*   Updated: 2020/12/02 17:46:13 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int s;
	int l;
	int len;

	while (to_find[len] != '\0')
		len++;
	if (len == 0)
		return (str);
	i = 0;
	while ((str[i] != '\0') && (l < len))
	{
		s = i;
		l = 0;
		while ((to_find[l] == str[s]) && (l < len))
		{
			l++;
			s++;
		}
		i++;
	}
	if (l == len)
		return (str + (i - 1));
	else
		return ('\0');
}
