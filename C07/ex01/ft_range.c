/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:53:09 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/27 14:33:58 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	calculator(int min, int max)
{
	if (max <= min)
		return (0);
	else
		return (max - min);
}

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	size;

	i = 0;
	size = calculator(min, max);
	if (size == 0)
	{
		array = 0;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * size);
	if (!(array))
		return (0);
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
int	main(int argc, char **argv)
{
	int	i;
	int	*array; 
	array = ft_range(atoi(argv[1]),atoi(argv[2]));
	i = 0;
	if (argc == 3)
	{
		if (array == 0)
			return (0);
		while (array[i])
		{	
			printf("%d\n", array[i]);
			i++;
		}
	}
}
*/
