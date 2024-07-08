/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:09:38 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/29 19:00:09 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	base_check(char *base);

int	length(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	len_result(int nbr, char *base_to)
{
	int		counter;
	long	n;

	n = (long)nbr;
	counter = 1;
	if (n < 1)
	{
		counter += 1;
		n = n * -1;
	}
	while (n > 1)
	{
		n = n / length(base_to);
		counter += 1;
	}
	return (counter);
}

void	ft_safe_nbr_base(int nbr, char *base_to, char *output, int *i)
{
	int		dimension;
	long	n;

	n = (long)nbr;
	dimension = length(base_to);
	if (!output)
		return ;
	if (n < 0)
	{
		output[*i] = '-';
		n = n * -1;
		i[0]++;
	}
	if (n >= dimension)
	{
		ft_safe_nbr_base(n / dimension, base_to, output, i);
		i[0]++;
	}
	output[*i] = base_to[n % dimension];
}
