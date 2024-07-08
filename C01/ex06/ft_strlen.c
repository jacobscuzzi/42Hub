/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:30:49 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/11 20:33:12 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[0] != '\0')
	{
		counter = counter + 1;
		str = str +1;
	}
	return (counter);
}
/*
int	main(void)
{	
	char	word[] = "LOOOOOOOOOOl";

printf("%d",ft_strlen(word));
	return(0);
}
*/
