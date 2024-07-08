/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:17:59 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/15 11:07:18 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	output;

	output = 1;
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'z' || (*str > 'Z' && *str < 'a'))
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
	char	word[]="kcalc0nmslaw";
	printf("%d", ft_str_is_alpha(word));
	return(0);
}
*/
