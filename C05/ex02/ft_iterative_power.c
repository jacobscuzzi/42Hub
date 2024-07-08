/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:49:30 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/02/22 18:01:44 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	counter;

	counter = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 0)
	{
		counter = counter * nb;
		power--;
	}
	return (counter);
}
/*
int	main(int argc, char ** argv)
{
	if (argc == 3)
		printf("%s ^ %s = %d", argv[1], argv[2], 
	ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}
*/
