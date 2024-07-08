/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:28:43 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/21 18:39:35 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	finder;
	int	controler;

	finder = 0;
	controler = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[finder] != '\0')
	{
		controler = 0;
		while (str[finder + controler] == to_find[controler])
		{
			controler++;
			if (to_find[controler] == '\0')
				return (&str[finder]);
		}
		finder++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%s\n", ft_strstr(argv[1], argv[2]) );
}
*/
