/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:13:27 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/15 17:31:52 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	numb_letter(char *letter)
{
	int	output;
	int	i;

	output = 0;
	i = 0;
	{
		if ((*letter >= '0' && *letter <= '9')
			|| (*letter >= 'A' && *letter <= 'Z')
			|| (*letter >= 'a' && *letter <= 'z'))
				output = 1;
		return (output);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((numb_letter(&str[i - 1]) == 0) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	word[] = "salut Aiaiaia, comment tu vas ? 
42mots quarante-deux; cinquante+et+un";
	
	ft_strcapitalize(word);
	printf("%s", word);
	return (0);
}
*/
