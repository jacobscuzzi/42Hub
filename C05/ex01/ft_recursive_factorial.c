/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:25:43 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/26 16:24:57 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	counter;

	counter = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
	{
		counter = nb * ft_recursive_factorial(nb - 1);
	}
	return (counter);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d",ft_recursive_factorial(atoi(argv[1])));
}
*/
