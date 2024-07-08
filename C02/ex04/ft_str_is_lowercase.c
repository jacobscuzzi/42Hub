/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:06:26 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/15 11:05:56 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	output;

	output = 1;
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
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
	char	word[]="";
	printf("%d", ft_str_is_lowercase(word));
	return(0);
}
*/
