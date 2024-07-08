/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:56:20 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/22 12:34:36 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	unsigned int	i;
	
	if(argc == 4)
	{
		i = atoi(argv[3]);
		printf("%d, %d", strncmp(argv[1],argv[2], i), ft_strncmp(argv[1],argv[2], i));
	}
	return(0);
}
*/
