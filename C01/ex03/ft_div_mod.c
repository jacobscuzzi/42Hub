/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:44:50 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/12 16:09:32 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{		
	*div = a / b;
	*mod = a % b;
}	

/*
int	main(void)
{
	int	p;
	int	q;
	int 	*d;
	int	*m;
	int	div;
	int	mod;
	
	d = &div;
	m = &mod;		
	p  = 10;
	q  = 2;
	ft_div_mod(p, q, d, m);
	printf("%d", *d);
	return (0);
}
*/
