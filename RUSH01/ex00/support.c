/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsheer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:41:58 by gsheer            #+#    #+#             */
/*   Updated: 2024/02/18 22:24:40 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_dim_2(int **table)
{
	int	count;

	count = 0;
	while (table[0][count] != 0 && count < 10)
		count++;
	return (count);
}

void	print_table(int **table, int dimension)
{
	int		counter;
	int		counterarray;
	char	convertion;

	counterarray = 0;
	while (counterarray < dimension)
	{
		counter = 0;
		while (counter < dimension)
		{
			convertion = table[counterarray][counter] + '0';
			write(1, &convertion, 1);
			write(1, " ", 1);
			counter++;
		}
		write(1, "\n", 1);
		counterarray++;
	}
}

void	error(int error_number)
{
	int	display;

	display = 1;
	if (error_number == 0 && display == 0)
		write(1, "Error\nInput dimension is incorrect\n", 6);
	if (error_number == 0 && display == 1)
		write(1, "Error\nInput dimension is incorrect\n", 35);
	if (error_number == 1 && display == 0)
		write(1, "Error\nInput format is incorrect\n", 6);
	if (error_number == 1 && display == 1)
		write(1, "Error\nInput format is incorrect\n", 32);
	if (error_number == 2 && display == 0)
		write(1, "Error\nNot enough memory to create table\n", 6);
	if (error_number == 2 && display == 1)
		write(1, "Error\nNot enough memory to create table\n", 40);
	if (error_number == 3 && display == 0)
		write(1, "Error\nNot enough memory to create map constraint\n", 6);
	if (error_number == 3 && display == 1)
		write(1, "Error\nNot enough memory to create map constraint\n", 49);
	if (error_number == 4 && display == 0)
		write(1, "Error\nProblem is not solvable\n", 6);
	if (error_number == 4 && display == 1)
		write(1, "Error\nProblem is not solvable\n", 30);
}
