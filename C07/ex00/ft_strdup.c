/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:25:46 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/26 17:38:02 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

unsigned int	len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*cpy(char *src, char *dest)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char			*pointer;
	unsigned int	size;

	size = len(src);
	pointer = (char *)malloc(sizeof (char) * (size + 1));
	if (!(pointer))
		return (0);
	return (cpy(src, pointer));
}
/*
int	main(int argc, char **argv)
{
	if(argc == 2)
		printf("%s, %p",ft_strdup(argv[1]), ft_strdup(argv[1]));
}
*/
