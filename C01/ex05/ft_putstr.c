/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:51:41 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/11 23:20:02 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	text(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (str[0] != '\0')
	{
		text(*str);
		str = str + 1;
	}
}

/*
void	main(void)
{
	char s[] ="GutenTag";
	char	*p = s;
	ft_putstr(p);
}
*/
