/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:59:00 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/21 18:32:03 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	cursor_a;
	int	cursor_b;

	cursor_a = 0;
	cursor_b = 0;
	while (dest[cursor_a] != '\0')
	{
		cursor_a++;
	}
	while (src[cursor_b] != '\0')
	{
		dest[cursor_a] = src[cursor_b];
		cursor_a++;
		cursor_b++;
	}
	dest[cursor_a] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	word_a[50] = "test";
	char	word_aa[50] = "test";
	char	word_b[] = "abbba";
	char    word_bb[] = "abbba";

	printf("test function:%s\n", ft_strcat(word_a, word_b)); 
	printf("realfunction:%s\n", strcat(word_aa, word_bb));
	return (0);
}
*/
