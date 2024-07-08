/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thelaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 10:11:09 by thelaine          #+#    #+#             */
/*   Updated: 2024/02/18 16:20:28 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	print_table(int **table, int dimension);

int	get_dim(char *str)
{
	int	dimension;
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	dimension = 1;
	while (dimension < 10)
	{	
		if (4 * dimension == (len + 1) / 2)
			return (dimension);
		dimension++;
	}	
	return (0);
}

int	valid_str(char *str, int dimension)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (str[i] < 1 + '0' || str[i] > dimension + '0')
				return (0);
		}
		else
			if (str[i] != 32)
				return (0);
		i++;
	}
	return (1);
}

int	**create_tab(void)
{
	int	row;
	int	**tableau;

	row = 0;
	tableau = malloc (9 * sizeof (int *));
	while (row < 9)
	{	
		tableau[row] = malloc(9 * sizeof(int));
		if (!tableau[row])
			return (0);
		row++;
	}
	if (!tableau)
		return (0);
	return (tableau);
}

int	**get_map(char *str, int dimension, int **map_arg)
{
	int	counter_str;
	int	row;
	int	column;

	counter_str = 0;
	column = 0;
	row = 0;
	while (str[counter_str])
	{
		if (counter_str % 2 == 0)
		{
			map_arg[row][column] = str[counter_str] - '0';
			column++;
		}
		counter_str++;
		if (column == dimension)
		{
			row++;
			column = 0;
		}
	}
	return (map_arg);
}

int	**init_table(int **map_sol)
{
	int	i;
	int	**table;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			table[i][j] = 0;
			j++;
		}
		i++;
	}
	return (map_sol);
}

/*#include <stdio.h>
int     main(void)
{
        char *str ="4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
        int dimension = get_dim(str);
	int is_valid = valid_str(str, dimension);
	printf(" %d \n %d \n", dimension, is_valid);
	int **table = create_tab();
	table = init_table(table);
	print_table(table, dimension);
        int **map_constraint = create_tab();
	map_constraint = get_map(str,dimension, map_constraint);
        print_table(map_constraint, dimension);

}
*/
