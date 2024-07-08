/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:46:09 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/12 16:23:50 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_swap_if_bigger(int *a, int *b)
{
	int	cache;

	if (*a >= *b)
	{
		cache = *a;
		*a = *b;
		*b = cache;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	cursor;
	int	counter;

	counter = size - 1;
	cursor = 0;
	while (counter >= 0)
	{
		while (cursor <= size -2)
		{
			ft_swap_if_bigger(&tab[cursor], &tab[cursor + 1]);
			cursor ++;
		}
		cursor = 0;
		counter--;
	}
}
/*
int	main(void)
{
	int	array[] = {110, 22, 32, 4, 55, 17 ,22, 19, 111, 1, 3, 110};
	int 	cursor = 0;	
	int	size = 12;
	
		
	ft_sort_int_tab(array, size); 
	while (size >=1)
	{
		printf("%d ,", array[cursor]);
		size--;
		cursor++;
	}
	return (0);
}
*/
