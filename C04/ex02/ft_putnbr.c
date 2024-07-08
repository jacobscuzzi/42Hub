/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:10:25 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/22 13:35:59 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

void	text(char letter)
{
	write(1, &letter, 1);
}

void	ft_putnbr(int nb)
{
	long	nb2;

	nb2 = (long)nb;
	if (nb2 < 0)
	{
		text('-');
		nb2 = nb2 * (-1);
	}
	if (nb2 > 9)
		ft_putnbr (nb2 / 10);
	text((nb2 % 10) + '0');
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_putnbr(atoi(argv[1]));
}
*/
