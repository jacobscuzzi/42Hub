/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 22:28:42 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/15 11:26:14 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	output;

	output = 1;
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			output = 0;
		}
		str ++;
	}
	return (output);
}

/*
int	main(void)
{
	char	word[] = "nKbcbbihkq8oghkgchgqobj";
	
	word[2] = 1;
	printf("%d", ft_str_is_printable(word));
}
*/
