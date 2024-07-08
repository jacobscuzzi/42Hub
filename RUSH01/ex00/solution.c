/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thelaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:32:43 by thelaine          #+#    #+#             */
/*   Updated: 2024/02/18 21:28:22 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	test(int **map_sol, int **map_arg, int *coord, int tested);

int	*find(int **map_sol, int dimension)
{
	int	*position;
	int	i;
	int	j;

	i = 0;
	j = 0;
	position = malloc (2 * sizeof(int));
	while (i < dimension)
	{
		j = 0;
		while (j < dimension)
		{
			if (map_sol[i][j] == 0)
			{
				position[0] = i;
				position[1] = j;
				return (position);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	solution(int **map_sol, int **map_arg, int dimension)
{
	int	*coord;
	int	i;
	int	row;
	int	column;

	i = 1;
	coord = find(map_sol, dimension);
	if (!coord)
		return (1);
	row = coord[0];
	column = coord[1];
	while (i <= dimension)
	{
		if (test(map_sol, map_arg, coord, i) == 1)
		{
			map_sol[row][column] = i;
			if (solution(map_sol, map_arg, dimension) == 1)
				return (1);
			map_sol[row][column] = 0;
		}
		map_sol[row][column] = 0;
		i++;
	}
	return (0);
}
