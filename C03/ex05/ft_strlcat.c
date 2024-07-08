/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:35:33 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/22 12:23:18 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter = counter + 1;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= size)
		return (src_len + size);
	while ((dest_len + i + 1 < size) && (src[i] != '\0'))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
#include <bsd/string.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("the calculated length: %u\n", \
		ft_strlcat(argv[1], argv[2], atoi(argv[3])));
		//printf("the suposed length: %zu\n", 
		strlcat(argv[1], argv[2], atoi(argv[3]));
		printf("the new string: %s\n", argv[1]);
	}
	return(0);
}
*/
