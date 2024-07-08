/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:47:24 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/21 18:06:01 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	output;
	int	i;

	i = 0;
	output = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			output = s1[i] - s2[i];
			return (output);
		}
		i++;
	}
	return (output);
}
/*
int	main(void)
{
	char	*a = "test";
	char	*b = "test1";
	
	printf("%d, %d", strcmp(a,b), ft_strcmp(a,b));
}
*/
