/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secondary.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnataliz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 19:30:02 by jnataliz          #+#    #+#             */
/*   Updated: 2020/12/06 20:29:20 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	find(int *possib1, int *possib2, int *possib3, int *possib4, char input[]);
void	get_possible(int row, int *result, char input[]);
void	input_parser(char arg[], char parsed[]);
int		ft_check_values(char *cv);

int		main(int argc, char *argv[])
{
	int		check;
	int		*possibili1;
	int		*possibili2;
	int		*possibili3;
	int		*possibili4;
	char	input[16];

	check = ft_check_values(argv[1]);
	if (check == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (argc == 2)
	{
		input_parser(argv[1], input);
		possibili1 = malloc(sizeof(int) * 24);
		possibili2 = malloc(sizeof(int) * 24);
		possibili3 = malloc(sizeof(int) * 24);
		possibili4 = malloc(sizeof(int) * 24);
		get_possible(1, possibili1, input);
		get_possible(2, possibili2, input);
		get_possible(3, possibili3, input);
		get_possible(4, possibili4, input);
		find(possibili1, possibili2, possibili3, possibili4, input);
	}
}
