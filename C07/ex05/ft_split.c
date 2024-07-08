/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:16:12 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/29 14:07:45 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_part(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	wordcount(char *str, char *charset)
{
	int	mode;
	int	counter;
	int	i;

	mode = 0;
	counter = 0;
	i = 0;
	while (str[i])
	{
		if (is_part(str[i], charset) == 1)
			mode = 0;
		if (is_part(str[i], charset) == 0)
		{
			if (mode == 0)
				counter += 1;
			mode = 1;
		}
		i++;
	}
	return (counter);
}

int	len_next_word(char *str, int i, char *charset)
{
	int	counter;

	counter = 0;
	while (is_part(str[i], charset) == 0 && str[i] != 0)
	{
		counter++;
		i++;
	}
	return (counter);
}

char	*word_dupl(char *str, char *charset, int i)
{
	int		k;
	int		size;
	char	*table;

	k = 0;
	size = len_next_word(str, i, charset);
	table = (char *)malloc(sizeof (char) * (size + 1));
	if (!table)
		return (0);
	while (k < size)
	{
		table[k] = str[i + k];
		k++;
	}
	table[k] = '\0';
	return (table);
}

char	**ft_split(char *str, char *charset)
{
	char	**table;
	int		size;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size = wordcount(str, charset);
	table = (char **)malloc(sizeof(char *) * (size + 1));
	if (!table)
		return (0);
	while (j < size && str[i])
	{
		if (is_part(str[i], charset) == 0)
		{
			table[j] = word_dupl(str, charset, i);
			if (!table[j])
				return (0);
			i += len_next_word(str, i, charset);
			j++;
		}
		i++;
	}	
	table[size] = 0;
	return (table);
}
/*
int	main(int argc, char **argv)
{
	int		i;
	char	**table;

	i = 0;
	if (argc == 3)
	{
		table = ft_split(argv[1], argv[2]);
		while (table[i] != 0)
		{
			printf("%s\n", table[i]);
			i++;
		}
	}
}
*/
