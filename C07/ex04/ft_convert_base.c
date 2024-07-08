/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:29:17 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/29 18:59:54 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_safe_nbr_base(int nbr, char *base_to, char *output, int *i);

long	ft_atoi_base(char *str, char *base);

int		len_result(int nbr, char *base_to);

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
	long	counter;
	long	factorizer;

	factorizer = 1;
	counter = 0;
	while (in_base(str[i], base) >= 0)
	{
		counter = (long) counter + (in_base(str[i], base) * factorizer);
		factorizer = (long) factorizer * dimension;
		i--;
	}
	return (counter);
}

long	ft_atoi_base(char *str, char *base)
{
	int		i;
	long	negator;
	long	counter;
	int		dimension;

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	cache;
	char	*output;
	int		dimension;
	int		size;
	int		i;

	dimension = base_check(base_to);
	if (dimension == 0)
		return (0);
	if (base_check(base_from) == 0)
		return (0);
	cache = ft_atoi_base(nbr, base_from);
	size = len_result(cache, base_to) + 1;
	if (cache < 0)
		size = size + 1;
	i = 0;
	output = (char *)malloc(sizeof(char) * size);
	if (!output)
		return (0);
	ft_safe_nbr_base(cache, base_to, output, &i);
	output[size] = '\0';
	return (output);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("transformed to: %s", 
		ft_convert_base(argv[1], argv[2], argv[3]));
}
*/
