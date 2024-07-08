/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:50:21 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/22 12:55:52 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int 	main(int argc, char** argv)
{
	if(argc == 2)
		printf("size: %d" , ft_strlen(argv[1]));
	return(0);
}
*/
