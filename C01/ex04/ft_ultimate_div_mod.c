/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:01:25 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/11 00:45:59 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	cache_a;
	int	cache_b;

	cache_a = *a / *b;
	cache_b = *a % *b;
	*a = cache_a;
	*b = cache_b;
}
/*
int main(void)
{
	int	c = 10;
	int	d = 3;
	int	*a = &c;
	int	*b = &d;
	ft_ultimate_div_mod(a, b);
	printf("the result is %d, %d", c, d);
}
*/
