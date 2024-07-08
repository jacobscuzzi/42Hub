/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:23:45 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/13 21:27:30 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	output;

	output = 1;
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
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
	char	word[]="AABBABABAB";
	printf("%d", ft_str_is_uppercase(word));
	return(0);
}
*/
