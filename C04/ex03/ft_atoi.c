/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:13:24 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/24 17:52:14 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	skipper(char *str)
{
	int	i;

	i = 0;
	while ((str[i] == ' ') || (str[i] > 8 && str[i] < 14))
		i++;
	return (i);
}

int	numb_check(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	negator;
	int	factorizer;
	int	counter;

	factorizer = 1;
	negator = 1;
	counter = 0;
	i = skipper(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negator = negator * -1;
		i++;
	}
	while (numb_check(str[i]) == 1 && numb_check(str[i + 1]) == 1)
			i ++;
	while (str[i] >= '0' && str[i] <= '9' )
	{
		counter = counter + ((str[i] - '0' ) * factorizer);
		factorizer = factorizer * 10;
		i--;
	}
	return (negator * counter);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_atoi(argv[1]));
}
*/
