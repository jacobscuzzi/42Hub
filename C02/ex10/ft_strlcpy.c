/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:12:24 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/15 18:33:47 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	size_src;
	unsigned int	i;

	i = 0;
	size_src = len(src);
	if (size == 0)
		return (size_src);
	while (i < size - 1)
	{
		if (i < size_src)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (size_src);
}
/*
int	main(void)
{
	char	copy[] = "hello";
	char	paste[] = "copy to this location";
	ft_strlcpy(paste, copy, 5);

	printf("%s %s",paste);
}
*/
