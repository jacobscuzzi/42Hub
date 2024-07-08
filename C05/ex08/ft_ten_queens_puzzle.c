/* ************************************************************************** */
/*                  
*/
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:25:53 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/26 12:26:47 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	solution_write(int *str);

int	row_diago_check(int *chess)
{
	int	i;
	int	j;

	i = 0;
	while (i < 9 && chess[i] != -1)
	{
		j = i + 1;
		while (j < 10 && chess[j] != -1)
		{
			if (chess[i] == chess[j])
				return (0);
			if ((j - i) == chess[j] - chess[i])
				return (0);
			if ((j - i) == chess[i] - chess[j])
				return (0);
			if (chess[j] > 9)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	solution_find(int *chess, int row, int *counter)
{
	int	position;

	position = 0;
	while (position < 10)
	{
		chess[row] = position;
		if (row_diago_check(chess) == 1)
		{
			if (row == 9)
			{
				solution_write(chess);
				*counter += 1;
				chess[9] += 1;
			}
			solution_find(chess, row + 1, counter);
		}
		chess[row] = -1;
		position ++;
	}
	return (1);
}

void	solution_write(int *chess)
{
	int		i;
	char	a;

	i = 0;
	while (i < 10)
	{
		a = chess[i] + '0';
		write(1, &a, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_ten_queens_puzzle(void)
{
	int	chess[10];
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (i < 10)
		chess[i++] = -1;
	solution_find(chess, 0, &counter);
	return (counter);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(void)
{
	ft_ten_queens_puzzle();
	//printf("solutions: %d", ft_ten_queens_puzzle());
}
*/
