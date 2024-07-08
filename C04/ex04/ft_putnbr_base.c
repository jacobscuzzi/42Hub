/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:39:16 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/22 15:32:02 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	length(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	text(char c)
{
	write(1, &c, 1);
}

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
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		dimension;
	long	n;

	dimension = length(base);
	n = (long)nbr;
	if (base_check(base) == 0)
		return ;
	if (n < 0)
	{
		text('-');
		n = n * -1;
	}
	if (n >= dimension)
		ft_putnbr_base((n / dimension), base);
	text(base[n % dimension]);
}
/*
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr_base(atoi(argv[1]), argv[2]);
}
*/
