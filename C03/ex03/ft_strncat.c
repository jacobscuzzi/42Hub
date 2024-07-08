/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:39:35 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/22 12:48:56 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cursor_a;
	unsigned int	cursor_b;

	cursor_a = 0;
	cursor_b = 0;
	while (dest[cursor_a] != '\0')
		cursor_a++;
	while (cursor_b < nb && src[cursor_b] != '\0')
	{
		dest[cursor_a + cursor_b] = src[cursor_b];
		cursor_b++;
	}
	dest[cursor_a + cursor_b] = '\0';
	return (dest);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
		if (argc != 4)
			return (0);
		printf("our function: %s", ft_strncat(argv[1], argv[2], atoi(argv[3])));
		//printf("real function: %s", strncat(argv[1], argv[2], atoi(argv[3])));
		return (0);
}
*m
*/
