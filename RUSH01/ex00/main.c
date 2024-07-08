/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:11:31 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/18 21:53:56 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Block 1: Initializatiom 
	- Reading, Checking Input
	- crating an input table 
	- creating empty table for the solution
*/
//calculates and dimension of input -> returns 0 if input invalid:
int		get_dim(char *str);
//checks if format of input is correct (yes -> 1):
int		valid_str(char *str, int dimension);
//creates table with all the input arguments:
int		**get_map(char *str, int dimension, int **tab);
//creating a table for the solution with 0s in every field:
int		**init_table(int **tab);

int		**create_tab(void);

/*Block 2: Testing
*/
/*Block 3: Solution
	- f
*/
int		print_table(int **table, int dimension);
/*
Block 4: Support
*/
int		print_table(int **table, int dimension);

void	error(int error_number);
//function uses Backtracking to find a solution that passes all validations
int		solution(int **map_sol, int **map_arg, int dimension);

int	check_valid_str(char *str)
{
	int	dimension;

	dimension = get_dim(str);
	if (dimension == 0)
	{	
		error(0);
		return (0);
	}
	if (valid_str(str, dimension) == 0)
	{
		error(1);
		return (0);
	}
	return (dimension);
}

int	**creation_map_arg(char *str, int dimension)
{
	int	**map_arg;

	map_arg = create_tab();
	if (map_arg == 0)
	{
		error(2);
		return (0);
	}
	map_arg = get_map(str, dimension, map_arg);
	if (map_arg == 0)
	{
		error(2);
		return (0);
	}
	return (map_arg);
}

int	**creation_map_sol(void)
{
	int	**map_sol;

	map_sol = create_tab();
	if (map_sol == 0)
	{
		error(2);
		return (0);
	}
	map_sol = init_table(map_sol);
	if (map_sol == 0)
	{
		error(3);
		return (0);
	}
	return (map_sol);
}	

void	solve(int **map_sol, int **map_arg, int dimension)
{
	solution(map_sol, map_arg, dimension);
	print_table(map_sol, dimension);
}

int	main(int argc, char **argv)
{
	int	dimension;
	int	**map_arg;
	int	**map_sol;	

	if (argc != 2)
		error(1);
	else
	{	
		dimension = check_valid_str(argv[1]);
		if (dimension == 0)
			return (0);
		map_arg = creation_map_arg(argv[1], dimension);
		if (map_arg == 0)
			return (0);
		map_sol = creation_map_sol();
		if (map_sol == 0)
			return (0);
		if (solution(map_sol, map_arg, dimension) == 0)
		{
			error(4);
			return (0);
		}
		solve(map_sol, map_arg, dimension);
	}
}
