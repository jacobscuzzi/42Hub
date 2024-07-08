/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:38:55 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/15 15:23:09 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	cache;

	cache = *a;
	*a = *b;
	*b = cache;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	cursor_a;
	int	cursor_b;
	int	middle;

	middle = size / 2;
	cursor_a = 0;
	cursor_b = size - 1;
	while (cursor_a < middle)
	{
		ft_swap(&tab[cursor_a], &tab[cursor_b]);
		cursor_a ++;
		cursor_b --;
	}
}
/*
int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5, 7 ,8, 9, 10, 11};
	int	size = 10;
	int	cursor = 0;	
	ft_rev_int_tab(array, size);
	
	while (size >= 1)
	{
		printf("%d ,", array[cursor]);
		size--;
		cursor++;
	}
	return (0);
}
*/
