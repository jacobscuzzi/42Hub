/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:16:29 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/11 15:26:58 by apena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	top(int width)
{
	ft_putchar('A');
	if (width == 1)
	{
		ft_putchar('\n');
	}
	else
	{
		width = width - 1;
		while (width >= 2)
		{
			ft_putchar('B');
			width = width - 1;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	bottom(char width)
{
	ft_putchar('C');
	if (width == 1)
	{
		ft_putchar('\n');
	}
	else
	{
		width = width - 1;
		while (width >= 2)
		{
			ft_putchar('B');
			width = width - 1;
		}
		ft_putchar('A');
		ft_putchar('\n');
	}
}

void	pipes(int width)
{
	ft_putchar('B');
	if (width == 1)
	{
		ft_putchar('\n');
	}
	else
	{
		width = width - 1;
		while (width >= 2)
		{
			ft_putchar(' ');
			width = width - 1;
		}
		ft_putchar('B');
		ft_putchar('\n');
	}
}

void	rush(int width, int hight)
{
	if (hight <= 0 || width <= 0)
	{
		write(1, "Please give positive numbers", 28);
	}
	else
	{
		top(width);
		if (hight >= 2)
		{
			hight = hight - 1;
			while (hight >= 2)
			{
				pipes(width);
				hight = hight - 1;
			}
			bottom(width);
		}
	}
}
