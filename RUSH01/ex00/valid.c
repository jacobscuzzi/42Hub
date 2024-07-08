/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thelaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:12:23 by thelaine          #+#    #+#             */
/*   Updated: 2024/02/18 21:25:09 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_table(int **table, int dimension);
int	get_dim(char *str);
int	get_dim_2(int **table);
int	valid_str(char *str, int dimension);
int	**get_map(char *str, int dimension, int **tab);
int	**create_tab(void);

int	double_rowcheck(int **table, int row, int dimension)
{
	int	column;
	int	value_tested;
	int	i;

	column = 0;
	while (column < dimension - 1)
	{
		value_tested = table[row][column];
		i = column + 1;
		while (i < dimension)
		{	
			if (value_tested == table[row][i] && value_tested != 0)
				return (0);
			i++;
		}
		column++;
	}
	return (1);
}

int	double_columncheck(int **table, int column, int dimension)
{
	int	row;
	int	value_tested;
	int	i;

	row = 0;
	while (row < dimension - 1)
	{
		value_tested = table[row][column];
		i = row + 1;
		while (i < dimension)
		{
			if (value_tested == table[i][column] && value_tested != 0)
				return (0);
			i++;
		}
		row++;
	}
	return (1);
}

int	rowcheck(int *row, int direction, int dimension)
//direction 1 is up , -1 is down
{
	int	i;
	int	counter;
	int	maximum;

	maximum = 0;
	counter = 1;
	if (direction == 1)
		i = 0;
	if (direction == -1)
		i = dimension -1;
	while ((row[i] != dimension))
	{
		if (row[i] > maximum)
		{
			maximum = row[i];
			counter++;
		}
		i = i + direction;
	}
	return (counter);
}

int	columncheck( int column, int direction, int dimension, int **table)
//direction: 1 is from left, -1 is from right
{
	int	convert_column[9];
	int	i;

	i = 0;
	while (i < dimension)
	{
		convert_column[i] = table[i][column];
		i++;
	}
	return (rowcheck(convert_column, direction, dimension));
}

int	test(int **map_sol, int **map_arg, int *coord, int tested)
{
	int	dim;

	map_sol[coord[0]][coord[1]] = tested;
	dim = get_dim_2(map_arg);
	if (double_rowcheck(map_sol, coord[0], dim) == 0)
		return (0);
	if (double_columncheck(map_sol, coord[1], dim) == 0)
		return (0);
	if (coord[1] == dim - 1)
	{
		if (rowcheck(map_sol[coord[0]], 1, dim) != map_arg[2][coord[0]])
			return (0);
		if (rowcheck(map_sol[coord[0]], -1, dim) != map_arg[3][coord[0]])
			return (0);
	}
	if (coord[0] == dim - 1)
	{
		if (columncheck(coord[1], 1, dim, map_sol) != map_arg[0][coord[1]])
			return (0);
		if (columncheck(coord[1], -1, dim, map_sol) != map_arg[1][coord[1]])
			return (0);
	}
	return (1);
}

/*#include<stdio.h>
int main(void)
{
	char *tab = "1 2 3 4 2 1 4 3 0 4 0 0 0 3 0 0";
	char *arg ="4 2 3 1 1 3 3 2 4 3 2 1 1 2 2 2"; 
	int  row[] = {3,2,4,1};
	int coord[] = {3,1};
	int nbr = 3;
        int dimension = get_dim(arg);
        int is_valid = valid_str(arg, dimension);
        //printf(" %d \n %d \n", dimension, is_valid);
        int **map_sol = create_tab();
	map_sol = get_map(tab, dimension, map_sol);
	int **map_arg = create_tab();
	map_arg = get_map(arg,dimension, map_arg);
        print_table(map_sol, dimension);
	write(1,"\n",1);
	print_table(map_arg, dimension);
	//printf("%d \n",double_rowcheck(map_sol,3, 4));
	//printf("%d", double_columncheck(map_sol, 0, 4));
	//printf("%d\n", rowcheck(row,1,4));
	//printf("%d\n", columncheck( nbr, 1, 4, map_sol));
	//printf("%d\n", columncheck( nbr, -1, 4, map_sol));
	//printf("%d\n",dimension); 
	printf("%d\n", test(map_sol, dimension, map_arg, coord, 3));
	return (0);
}	
*/			
