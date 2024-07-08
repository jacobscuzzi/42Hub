/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:59:53 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/29 19:01:48 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	calculator(int min, int max)
{
	if (max > min)
		return (max - min);
	else
		return (0);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*array;
	int	i;

	i = 0;
	size = calculator(min, max);
	if (size == 0)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * size);
	if (!(array))
		return (-1);
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (size);
}
/*
int	main(int argc, char **argv)
{
	int	**range;
	int	i;

	i = 0;
 	range = 0;
	if (argc == 3)
		printf("size: %d", ft_ultimate_range(range, atoi(argv[1]), atoi(argv[2])));
}
*/
