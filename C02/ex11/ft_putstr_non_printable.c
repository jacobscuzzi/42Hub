/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:05:19 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/19 13:36:07 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	text_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c >= 16)
	{
		write(1, &hex[c / 16], 1);
		write(1, &hex[c % 16], 1);
	}
	if (c < 16)
	{
		write(1, "0", 1);
		write(1, &hex[c % 16], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			text_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char	p[] = "Coucou\ntu vas bien ?";
	char	i;

	i = 1;

	while (i <= 126)
	{	
		text_hex(i);
		i++;
	}

	ft_putstr_non_printable(p);
}
*/
