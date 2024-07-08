/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:22:34 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/26 16:17:19 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	sqr_root_rest(int nb)
{
	int	i;
	int	counter;

	i = 1;
	counter = 0;
	while (nb > 0)
	{
		nb -= i;
		i += 2;
		counter++;
	}
	if (nb == 0)
		return (0);
	else
		return (counter);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	tester;

	i = 2;
	tester = sqr_root_rest(nb);
	if (nb == 2)
		return (1);
	if (nb == 3)
		return (1);
	if (tester == 0)
		return (0);
	while (i < tester)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
	while( i < (nb/2))
	{
		if ((6 * i) + 1 == nb ||(6 * i) - 1 == nb )
			return (1);
		i++;
	}
*/
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("Prime Checck: %d", ft_is_prime(atoi(argv[1])));
}
*/
