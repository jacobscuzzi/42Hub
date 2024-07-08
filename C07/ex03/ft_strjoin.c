/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:26:27 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/29 19:29:48 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	con_cat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!src[i])
		return ;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
}

int	ft_count_len(int size, char **strs, char *sep)
{
	int	i;
	int	count_len;

	i = 0;
	count_len = len(sep) * (size - 1);
	if (size == 0)
		count_len = 0;
	while (i < size && strs[i])
	{
		count_len += len(strs[i]);
		i++;
	}	
	return (count_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		count_len;
	char	*memory;

	count_len = ft_count_len(size, strs, sep);
	memory = (char *)malloc(sizeof(char) * (count_len + 1));
	if (!memory)
		return (0);
	memory[0] = '\0';
	i = 0;
	while (i < size && strs[i])
	{
		con_cat(memory, strs[i]);
		if (i < size - 1 && strs[i + 1])
			con_cat(memory, sep);
		i++;
	}
	memory[count_len] = '\0';
	return (memory);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc >= 1)
		printf("new String: -%s-\n", ft_strjoin(5, argv + 2, argv[1]));
		//free(ft_strjoin(0, argv+2, argv[1]));
}
*/
