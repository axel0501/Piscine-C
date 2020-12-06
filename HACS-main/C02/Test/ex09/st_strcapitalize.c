/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:40:24 by ametta            #+#    #+#             */
/*   Updated: 2020/12/04 11:12:54 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_decapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int check;

	ft_decapitalize(str);
	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122) && check == 1)
		{
			str[i] = str[i] - 32;
			check = 0;
		}
		else if ((str[i] >= 97) && (str[i] <= 122) && check == 0)
			check = 0;
		else if ((str[i] >= 48) && (str[i] <= 57))
			check = 0;
		else
			check = 1;
		i++;
	}
	return (str);
}
