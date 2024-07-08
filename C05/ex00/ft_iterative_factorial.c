/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:46:43 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/26 16:23:34 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	counter;

	counter = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		counter *= nb;
		nb--;
	}
	return (counter);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("factoriel de %d: %d", atoi(argv[1]) , 
		ft_iterative_factorial(atoi(argv[1])));
}
*/
