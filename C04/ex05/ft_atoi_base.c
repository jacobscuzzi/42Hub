/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:32:07 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/24 18:04:09 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if ((base[i] == ' ') || (base[i] > 8 && base[i] < 14))
			return (0);
		i++;
	}
	if (i < 1)
		return (0);
	return (i);
}

int	in_base(char a, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == a)
			return (i);
		i++;
	}
	return (-1);
}

int	calculator(int i, char *str, char *base, int dimension)
{
	int	counter;
	int	factorizer;

	factorizer = 1;
	counter = 0;
	while (in_base(str[i], base) >= 0)
	{
		counter = counter + (in_base(str[i], base) * factorizer);
		factorizer = factorizer * dimension;
		i--;
	}
	return (counter);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	negator;
	int	counter;
	int	dimension;

	i = 0;
	counter = 0;
	negator = 1;
	dimension = base_check(base);
	if (dimension == 0)
		return (0);
	while ((str[i] == ' ') || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negator = negator * -1;
		i++;
	}
	while (in_base(str[i + 1], base) >= 0 && in_base(str[i], base) >= 0)
		i++;
	counter = calculator(i, str, base, dimension);
	return (negator * counter);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d", ft_atoi_base(argv[1], argv[2]));
		//printf("%d", atoi_base(argv[1], argv[2]));
	}
}
*/
