/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:50:49 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/15 11:06:33 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	output;

	output = 1;
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
		{
			output = 0;
		}
		str++;
	}
	return (output);
}
/*
int	main(void)
{
	char	word[]="212738492848302";
	printf("%d", ft_str_is_numeric(word));
	return(0);
}
*/
